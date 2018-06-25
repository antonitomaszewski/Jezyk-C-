#include <iostream>

// // '\n'
void usun_komentarz_cpp() {
        using std::cin;

        char ch;
        // usuwamy aż do końca linijki
        do {
                cin.get(ch);
        } while (ch != '\n');
}
// /*...*/
void usun_komentarz_c() {
        using std::cin;

        char ch;
        do {
                cin.get(ch);
        } while (ch != '*');
        cin.get(ch);
        if (ch == '/')
                return;
        else {
                cin.putback(ch);
                usun_komentarz_c();
        }
}

void usun_komentarze() {
        using std::cin;
        using std::cout;
        char ch;

        // Dopóki nie dojdziemy do końca pliku
        do {
                cin.get(ch);
                if (ch == '/') {
                        cin.get(ch);
                        if (ch == '/')
                                usun_komentarz_cpp();
                        else if (ch == '*')
                                usun_komentarz_c();
                } else {
                        cout << ch;
                }
        } while (ch != '\0');
}
