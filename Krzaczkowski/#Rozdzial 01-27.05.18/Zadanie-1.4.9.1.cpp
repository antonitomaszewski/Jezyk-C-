#include <iostream>

int main()
{
        int n, m, pom_1, pom_2;
        std::cout << "Podaj liczbę całkowitą n:";
        std::cin >> n;
        std::cout << "Podaj liczbę całkowitą m:";
        std::cin >> m;

        pom_1 = n;
        pom_2 = m;
        while (pom_1 * pom_2 != 0)
                if (pom_1 > pom_2)
                        pom_1 = pom_1 % pom_2;
                else
                        pom_2 = pom_2 % pom_1;
        std::cout << "NWD liczb " << n << " i " << m << " wynosi ";
        if (pom_1 != 0)
                std::cout << pom_1 << std::endl;
        else
                std::cout << pom_2 << std::endl;
        return 0;

}
