#include <algorithm>  // std::copy
#include <iostream>   // std::cout, std::cin
#include <iterator>   // std::ostream_iterator
#include <list>       // std::list
#include <set>        // std::set
#include <string>     // std::string





int main()
{
        using std::copy;
        using std::cout;
        using std::cin;
        using std::ostream_iterator;
        using std::list;
        using std::set;
        using std::string;

        using std::pair;

        typedef set<string> ZbiorSlow;    // definiujemy nowy Typ: jest to Zbior pól typu string i nazywamy go ZbiorSlow
        typedef ZbiorSlow::iterator IterSlow; // definiujemy nowy Typ: iterator po ZbiorzeSłów, set ma takie pole?
        typedef list<IterSlow> Indeks;

        ZbiorSlow slowa;  // set<string>
        Indeks porzadek_wejsciowy; // list<set<string>::iterator>, tylko że ty jest związane ze ZbiorSlow

        // Wprowadzaj słowa bez powtórzeń
        for (string nowe_slowo; cin >> nowe_slowo, nowe_slowo != "Koniec"; ) { // sprytne wrzucenie cin do środka :)
                pair<IterSlow, bool> const &slad = slowa.insert(nowe_slowo);
                // bool b = slowa.insert(nowe_slowo);  set.insert(typ) zwraca pair<iterator, bool>
                if (slad.second)
                        porzadek_wejsciowy.push_back(slad.first);
        }

        // Wypisuj słowa bez powtórzeń w porządku wejściowym:
        cout << "\n>>> Słowa bez powtórzeń w porząðku wejściowym:\n";
        for (Indeks::iterator p = porzadek_wejsciowy.begin(); p != porzadek_wejsciowy.end(); ++p) // iterator po liście, której elementami jest iterator po zbiorze??
                cout << *(*p) << '\n';   // wyłuskujemy iterator IndeksSlow[i], trzeba jeszcze z niego przejść do zbioru, dlatego kolejne wyłuskanie??
}
