#include <assert.h>
#include <string>
#include <iostream>

using std::string;

// te jego rozwiązania liczą tylko pary obok siebie :: ("ab", a, b) = 1, ("acb", a, b) = 0; całkiem chujowo

size_t licz_pary_znakow(const string &s, char a, char b) {
        size_t wynik = 0;
        string::const_iterator p = s.begin();
        while(p != s.end())
                if (*(p++) == a)
                        if (p != s.end() && (*p) == b)
                                ++wynik;
        return wynik;
}

size_t licz_pary_znakow(const char *s, char a, char b) {
        assert(s);
        size_t wynik = 0;
        while(*s)
                if (*(s++) == a)
                        if (*s == b)
                                ++wynik;
        return wynik;
}

int main() {
        using std::cin;
        using std::cout;
        using std::endl;

        string s;
        cin >> s;
        while (s != "Koniec") {
                cin >> s;
                const string &s1 = s;
                char a, b;
                cin >> a >> b;

                cout << "string : funkcja 1: " << licz_pary_znakow(s1, a, b) << endl;

                string t;
                cin >> t;
                const string &t1 = t;
                char a1, b1;
                cin >> a1 >> b1;
                cout << "const_char : funkcja 2: " << licz_pary_znakow(t1, a1, b1) << endl;
        }
        // Jak robiłem do {} while (s != Koniec) to była nieskończona pętla

}
