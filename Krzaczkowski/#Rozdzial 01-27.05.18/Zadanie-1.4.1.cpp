#include <iostream>

int main()
{
        int n, m;
        std::cout << "Podaj liczbę całkowitą n: ";
        std::cin >> n;
        std::cout << "Podaj liczbę całkowitą m: ";
        std::cin >> m;
        for (int i = n; i < m; i += n)
                std::cout << i << std::endl;
        return 0;
}
