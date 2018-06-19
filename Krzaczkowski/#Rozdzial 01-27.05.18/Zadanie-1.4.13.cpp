#include <iostream>

int main()
{
        int n, silnia = 1, suma = 1;
        std::cout << "Podaj liczbę całkowitą n:";
        std::cin >> n;
        for (int i = 1; i <= n; i++) {
                silnia *= i;
                suma += silnia;
        }
        std::cout << "0! + 1! + ... + " << n << "! = " << suma << std::endl;
        return 0;
}
