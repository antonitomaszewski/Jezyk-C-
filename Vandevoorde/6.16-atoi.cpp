/* NIEROZUMIEM */

#include <iostream>
#include <stdexcept>
#include <string>
#include <limits>

using std::domain_error;
using std::range_error;
using std::string;

namespace {
/* NIEROZUMIEM */
inline int cyfra (char c, int podstawa) {
        int wartosc;
        switch (c) {
        case '0': wartosc = 0; break;
        case '1': wartosc = 1; break;
        case '2': wartosc = 2; break;
        case '3': wartosc = 3; break;
        case '4': wartosc = 4; break;
        case '5': wartosc = 5; break;
        case '6': wartosc = 6; break;
        case '7': wartosc = 7; break;
        case '8': wartosc = 8; break;
        case '9': wartosc = 9; break;
        case 'a': case 'A': wartosc = 10; break;
        case 'b': case 'B': wartosc = 11; break;
        case 'c': case 'C': wartosc = 12; break;
        case 'd': case 'D': wartosc = 13; break;
        case 'e': case 'E': wartosc = 14; break;
        case 'f': case 'F': wartosc = 15; break;
        default:
                throw domain_error(string("niepoprawna cyfra"));
        }
        if (wartosc >= podstawa)
                throw domain_error(string("niepoprawna cyfra"));
        return wartosc;
}

/* NIEROZUMIEM */
inline char nastepny_znak(const char *&p) {
        if (*p != '\\') // \ ma specjalne znaczenie; więc '\\'
                return *(p++);
        else { // 3 cyfry ósemkowe:
                int wartosc_znaku = cyfra(p[1], 8) * 64 + cyfra(p[2], 8) * 8 + cyfra(p[3], 8);
                if (wartosc_znaku > std::numeric_limits<char>::max() or wartosc_znaku < std::numeric_limits<char>::min())
                        throw domain_error (string ("nie znak"));
                p += 4; // odwrtotny ukośnik i 3 cyfry ósemkowe
                return wartosc_znaku;
        }
}

void pobierz_pierwsza_cyfre(const char *&s, int &wartosc, bool &jest_ujemne, int &podstawa) {
        char c1 = nastepny_znak(s);
        jest_ujemne = (c1 == '-');
        if (c1 == '-' || c1 == '+')
                c1 = nastepny_znak(s);
        if (c1 == '\0') { // "", "-" i "+" są niepoprawne
                throw domain_error(string("niepoprawne wejście"));
        } else if (c1 != '0') {
                podstawa = 10;
        } else {
                const char *p = s;
                char c2 = nastepny_znak(p);
                if (c2 == 'x' || c2 == 'X') { // "0x..."?
                        podstawa = 16;
                        s = p;
                        c1 = nastepny_znak(s);
                } else {  // c2 != 'x' && c2 != 'X'
                        podstawa = 8; // Nawet "0" jest traktowane jako ósemkowe
                }
        }
        wartosc = cyfra(c1, podstawa);
}
} // Koniec nienazwanej przestrzeni nazw (funkcje pomocnicze)

int atoi(const char *s) {
        int wartosc, podstawa;
        bool jest_ujemne;

        pobierz_pierwsza_cyfre(s, wartosc, jest_ujemne, podstawa);
        while (char c = nastepny_znak(s)) {
                if (wartosc > std::numeric_limits<int>::max()/podstawa)
                        throw range_error(string("poza zakresem"));
                wartosc *= podstawa;
                int d = cyfra(c, podstawa);
                if (wartosc > std::numeric_limits<int>::max()-d)
                        throw range_error(string("poza zakresem"));
                wartosc += d;
        }
        return jest_ujemne ? -wartosc : wartosc;
}

int main()
{
        const char *napis = "123";
        int liczba = atoi(napis);
        std::cout << napis + 1 << std::endl;
        std::cout << liczba + 1 << std::endl;
}
