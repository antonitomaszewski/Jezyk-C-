#include <iostream>

enum Kontekst { komentarz_c, komentarz_cpp, stala_napisowa, stala_znakowa, koniec_pliku };


// /*...*/
void obsluz_komentarz_c() {
        using std::cin;

        char ch;
        while (cin.get(ch)) {
                if (ch == '*') {
                        // Pomiń dodatkowe gwiazdki:
                        while (cin.get(ch) && ch == '*')
                                ;
                        if (ch == '/')
                                break;
                }
        }
}


// //...'\n'
void obsluz_komentarz_cpp() {
        // Pomiń aż do końca wiersza
        using std::cin;
        using std::cout;

        char ch;
        while (cin.get(ch) && ch != '\n')
                ;
        cout << '\n';
}

void obsluz_stala(char ogranicznik) {
        using std::cout;
        using std::cin;

        cout << ogranicznik; // Czytaj lewy ogranicznik
        char ch;
        while (cin.get(ch)) {
                if (ch == ogranicznik) // Znaleziono prawy ogranicznik?
                        break;
                else if (ch == '\\') // Przekazano następny znak bez zmian
                        cin.get(ch) && cout << ch;
        }
}

Kontekst obsluz_kod() {
        using std::cin;
        using std::cout;

        char ch;
        while (cin.get(ch)) {
                switch (ch) {
                case '/':
                        if (!cin.get(ch)) { // W rzeczywistości byłby to błędny kod w C++
                                cout << '/';
                                return koniec_pliku;
                        } else {
                                if (ch == '*')
                                        return komentarz_c;
                                else if (ch == '/')
                                        return komentarz_cpp;
                                else {
                                        cout << '/';
                                        cin.putback(ch);
                                        break;
                                }
                        }
                case '\"': return stala_napisowa;
                case '\'': return stala_znakowa;
                default: cout << ch;
                }
        }
        return koniec_pliku;
}

int main(int argc, char *argv[])
{
        using std::cerr;

        if (argc > 1) {
                cerr << "Ten program nie przyjmuje żadnych argumentów.\n";
                return -1;
        } else {
                Kontekst kontekst;

                while ((kontekst = obsluz_kod()) != koniec_pliku)
                        switch(kontekst) {
                        case komentarz_c:
                                obsluz_komentarz_c();
                                break;
                        case komentarz_cpp:
                                obsluz_komentarz_cpp();
                                break;
                        case stala_napisowa:
                                obsluz_stala('\"');
                                break;
                        case stala_znakowa:
                                obsluz_stala('\'');
                                break;
                        }
                return 0;
        }
}
