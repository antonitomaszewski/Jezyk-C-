/* wczytuje ciąg par: <pojedyncze_slowo, liczba(int, lub float/double)>
   wypisz sumę i średnią dla każdego słowa oraz dla wszystkich nazw */
// sprawdzić z biblioteki standardowej pair oraz map


#include <iostream>
#include <map>
#include <string>

struct Stat {
        // Upewnij się, że domyślny konstruktor robi to co trzeba
        // (Używane wewnętrznie przez strukturę danych słownika)
        Stat() : suma_(0.0), licznik_(0){
        }
        double suma_;
        int licznik_;
};

using std::string;
using std::map;
using std::cin;
using std::cout;
using std::endl;

typedef map<string, Stat> Dane;  // definiujemy nowy typ:
// jest to mapa (słownik?) par o wyglądzie <slowo, <suma_wartosci, ile_bylo>>, czyli zbiór par, <klucz, wynik>
// dajemy temu typowi używanemu przez nas nazwę Dane

void zbierz_dane(Dane &statystyki) {
        string nazwa;
        while (cin >> nazwa && nazwa != "a") { // dopóki da się coś wczytać
                double dana;
                cin >> dana; // wczytuję wartość dla danego słowa
                statystyki[nazwa].suma_ += dana; // tak jakby ten słownik był całkiem mądry - jeśli nie znajdzie po danym kluczu, to automatycznie tworzy obiekt Dana (zwartosciami (0,0)) i dodaje odpowiednio wartosc oraz do licznika 1
                ++statystyki[nazwa].licznik_; // trochę głupio, że dwa razy szukamy po tym słowniku, lepiej byłoby to chyba zapamiętać w zmiennej tymczasowej
                // Dane D = *statystyki[nazwa];, ALE NIE WIEM JAK
        }
}

void drukuj_statystyki(Dane const &statystyki) {
        double globalna_suma = 0;
        int globalny_licznik = 0;

        for (Dane::const_iterator p = statystyki.begin(); p != statystyki.end(); p++) { // czyli idę jakby po komórkach typu <string, Stat> i zwiększam licznik, czyli wskazuję jakby na kolejną komórkę pamięci, ale jednak są to trochę bardziej skomplikowane byty niż pojedyncze komórki
                cout << (*p).first // Klucz
                     << ": suma = " << (*p).second.suma_
                     << ", średnia = " << (*p).second.suma_/(*p).second.licznik_
                     << endl;
                globalna_suma += (*p).second.suma_; // (===? p->second.suma_) chyba tak
                // int i = p->second.suma_;
                // cout << i << endl;
                globalny_licznik += (*p).second.licznik_;
        }
        cout << "Globalna suma: " << globalna_suma
             << ", Globalna średnia: " << globalna_suma / globalny_licznik
             << ", Globalny licznik: " << globalny_licznik
             << endl;
}

int main()
{
        Dane statystyki;
        zbierz_dane(statystyki);
        drukuj_statystyki(statystyki);
        return 0;
}
/*
   przykładowe wywołanie A 1 B 2 C 3 D 4 A 11 a
   A: suma = 12, średnia = 6
   B: suma = 2, średnia = 2
   C: suma = 3, średnia = 3
   D: suma = 4, średnia = 4
   Globalna suma: 21, Globalna średnia: 4.2, Globalny licznik: 5
 */
