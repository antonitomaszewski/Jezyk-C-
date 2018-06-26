#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>

using std::string;
typedef std::multiset<double> PodzbiorDanych;
typedef std::map<string, PodzbiorDanych> Dane;

using std::size_t;
using std::cin;
using std::cout;
using std::endl;


void zbierz_dane(Dane &statystyki) {
        string nazwa;
        while (cin >> nazwa && nazwa != "a") {
                double dana;
                std::cin >> dana;
                statystyki[nazwa].insert(dana);
        }
}

void drukuj_statystyki_pojedynczego_zbioru(PodzbiorDanych const &pojedyncze_statystyki) {
        size_t licznik = 0;
        double suma = 0.0, mediana;
        size_t srodek = (pojedyncze_statystyki.size() - 1) / 2;
        size_t dlugosc_parzystosc = pojedyncze_statystyki.size() % 2;
        for (PodzbiorDanych::const_iterator p = pojedyncze_statystyki.begin(); p != pojedyncze_statystyki.end(); ++p, ++licznik) {  // idziemy po kolejnych wartościach dodanych do zbioru dla pewnego konkretnego klucza
                suma += *p; // dodajemy oczywiscie obecna wartosc do sumy wszystkich

                // zbiór PodzbiorDanych jest uporządkowany, więc w jego środku leży mediana (trzeba sprawdzić, czy rozmiar parzysty czy nieparzysty)
                if (licznik == srodek) {
                        if (dlugosc_parzystosc == 0) {    // parszysta liczba wartości -> trzeba wziąć średnią dwóch środkowych dla {1, 2, 3, 4} jest to 2 + 3 /2 == 2.5
                                PodzbiorDanych::const_iterator q = p; // tworzymy pomocniczy iterator na chwilę, aby dało się naraz objąć na miejscach n/2 i (n+1)/2 i było wmiarę czytelnie
                                q++;
                                mediana = (*p + *q) / 2.0;
                        } else {
                                mediana = *p;
                        }
                }
        }
        cout << "suma = " << suma << ", średnia = " << suma/double(licznik) << ", mediana = " << mediana << endl;
}


/*
   połącz_statystyki: prześlij elementy ze zbiorów
   związanych z nazwami do globalnego zbioru, żeby
   w końcu można było poiczyć globalne statystyki.
 */
void polacz_statystyki(PodzbiorDanych &Do, PodzbiorDanych &Z) {
        // Kolekcje asocjacyjne przy wstawianiu przyjmują "wskazówki":
        PodzbiorDanych::iterator wskazowka = Do.begin();
        for (PodzbiorDanych::iterator p = Z.begin(); p != Z.end(); ++p) {
                wskazowka = Do.insert(wskazowka, *p); // wrzucam kolejne wartości z Z na miejsce, które w jakiś dziwny sposób pomagawybrać wskazówka Do i odpowiednio po kolei usuwam je z Z -- używane żeby scalić statystyki całościowe w jedne duże (inaczej nie będzie się dało ustalić mediany)
                Z.erase(p);
        }
}

void drukuj_statystyki(Dane &statystyki) {
        PodzbiorDanych globalny_zbior;
        for (Dane::iterator p = statystyki.begin(); p != statystyki.end(); ++p) {
                cout << (*p).first << ": "; // wypisuje obecną nazwę (klucz)
                drukuj_statystyki_pojedynczego_zbioru((*p).second); // drukuje statystyki dla obecnego klucza
                polacz_statystyki(globalny_zbior, (*p).second);
        }
        cout << "Globalne statystyki: ";
        drukuj_statystyki_pojedynczego_zbioru(globalny_zbior);
}

int main() {
        Dane statystyki;
        zbierz_dane(statystyki);
        drukuj_statystyki(statystyki);
        return 0;
}

/*
   A 1 B 2 C 3 A 4 a
   A: suma = 5, średnia = 2.5, mediana = 2.5
   B: suma = 2, średnia = 2, mediana = 2
   C: suma = 3, średnia = 3, mediana = 3
   Globalne statystyki: suma = 10, średnia = 2.5, mediana = 2.5

   A 1 B 2 A 10 A 11 a
   A: suma = 22, średnia = 7.33333, mediana = 10
   B: suma = 2, średnia = 2, mediana = 2
   Globalne statystyki: suma = 24, średnia = 6, mediana = 6

 */
