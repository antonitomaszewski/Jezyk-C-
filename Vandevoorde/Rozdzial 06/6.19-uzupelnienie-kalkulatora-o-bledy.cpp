/* UZUPEŁNIENIE KALKULATORA z podręcznika 6.1 o BŁĘDY i licznik wierszy */

struct LicznikWierszy {
        LicznikWierszy() : wiersz_ (1) {
        }                           // Nie ma wiersza zerowego
        unsigned long biezacy() {
                return wiersz_;
        }
        void nowy_wiersz() {
                ++wiersz_;
        }
private:
        unsigned long wiersz_;
};

LicznikWierszy licznik_wierszy;

Wartosc_symbolu daj_symbol() {
        char ch;
        do { // Pamiętaj białe znaki z wyjątkiem '\n'
                if (!cin.get(ch))
                        return biezacy_symbol = KONIEC;
        } while (ch != '\n' && isspace(ch));

        switch (ch) {
        case '\n': licznik_wierszy.nowy_wiersz(); // Przejście do nowego wiersza!
        case ';': return biezacy_symbol = DRUK;
        case '*': // ...
        }
}

// Funckja wypisująca raport o błędzie
double blad(const string &komunikat) {
        ++liczba_bledow;
        std::cout << "BŁĄÐ (wiersz " << licznik_wierszy.biezacy() << "): " << komunikat << '\n';
        return 1;
}
