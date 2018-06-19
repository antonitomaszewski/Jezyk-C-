// drukowanie wszystkich liter i cyfr z uwzględnieniem innych alfabetów
// wersja 3
#include <limits.h>
#include <iostream>

void pr(int i)
{
        std::cout << (char) i << " " << i << '\n';
}
int main(int, char**)
{
        for (int i = 0; i <= CHAR_MAX; i++)
                if (islower(i) || isdigit(i))
                        pr(i);
        return 0;
}
