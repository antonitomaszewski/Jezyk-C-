#include <iostream>

int main()
{
        int n, m, nwd = 1, max;
        std::cout << "Podaj liczbę całkowitą n:";
        std::cin >> n;
        std::cout << "Podaj liczbę całkowitą m:";
        std::cin >> m;
        max = (n > m) ? n : m;  // czemu nie iść do min = (n > m) ? m : n; ???
        for (int i = 2; i <= max; i++)
                if ((n % i == 0) and (m % i == 0))
                        nwd = i;
        std::cout << "NWD liczb " << m << " i " << m << " wynosi " << nwd << std::endl;
        return 0;
}
