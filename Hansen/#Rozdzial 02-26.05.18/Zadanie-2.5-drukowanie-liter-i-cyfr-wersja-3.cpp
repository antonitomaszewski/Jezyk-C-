// drukowanie literi cyfr
// wersja 3
// sprawdza każdą literę przed wypisaniem, przydatne kiedy komputer nie korzysta z kodowania ASCI, wtedy znaki mogą być inaczej ułożone
#include <iostream>
#include <ctype.h>

void pr(int i)
{
        std::cout << (char) i << " " << i << '\n';
}
int main(int, char**)
{
        for (int i = 'A'; i <= 'z'; i++)
                if (isalpha(i))
                        pr(i);
        for (int i = '0'; i <= '9'; i++)
                pr(i);
        return 0;
}
