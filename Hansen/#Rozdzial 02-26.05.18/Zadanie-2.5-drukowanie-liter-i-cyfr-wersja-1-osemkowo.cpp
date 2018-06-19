// drukowanie wszystkich znaków dających się wydrukować
// wersja 1?
#include <iostream>

void pr(int i)
{
        std::cout << (char) i << " " << i << '\n';
}
int main(int, char**)
{
        for (int i = 040; i <= 0176; i++)   // szesnastkowo 0x20 - 0x7E
                pr(i);
        return 0;
}
