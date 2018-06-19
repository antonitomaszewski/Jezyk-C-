// NIE DZIAŁA -- Żadna zmiana wartości typu stałego mu się nie udała
#include <iostream>
#include <memory.h>

// const jeden = 1;
// void zmiana_stalej()
// {
//         jeden = 2;
// }

int main()
{
        const int jeden = 1;
        // jeden = 2;   BŁĄD:: jeden jest tylko do oczytu

        // int *p = &jeden;
        // *p = 2;         BŁĄD:: zła konwersja z const int*->int*

        // int *p = (int*) &jeden;
        // *p = 2;
        // std::cout << jeden << " " << *p << '\n';  // BRAK BŁĘDU, ALE NIE DZIAŁA

        // int dwa = 2;
        // memcpy((void*) &jeden, &dwa, sizeof(int));
        // std::cout << jeden << " " << dwa << '\n';    // BRAK BŁĘDU, ALE NIE DZIAŁA

        // int dwa = 2;
        // memcpy((void*) &jeden, (char*) &dwa, sizeof(int));
        // std::cout << jeden << " " << dwa << '\n';     // BRAK BŁĘDU, ALE NIE DZIAŁA

        return 0;
}
