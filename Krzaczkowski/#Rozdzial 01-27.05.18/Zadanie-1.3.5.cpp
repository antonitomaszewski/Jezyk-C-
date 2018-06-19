#include <iostream>
#include <cmath>

int main()
{
        int w;
        double bok_1, bok_2, bok_3, h, p, s;
        std::cout << "Obliczy pole trójkąta. Wypisz: \n 1-jeśli chcesz podać długośc podstawy i wysokość. \n 2-jeśli chcesz podać długość trzech boków\n";
        std::cin >> w;
        if (w == 1) {
                std::cout << "Podaj długość podstawy trójkąta.";
                std::cin >> bok_1;
                std::cout << "Podaj wysokość trójkąta.";
                std::cin >> h;
                p = bok_1 * h / 2;
        } else {
                std::cout << "Podaj długość pierwszego boku trójkąta: ";
                std::cin >> bok_1;
                std::cout << "Podaj długość drugiego boku trójkąta: ";
                std::cin >> bok_2;
                std::cout << "Podaj długość trzeciego boku trójkąta: ";
                std::cin >> bok_3;

                s = (bok_1 + bok_2 + bok_3) / 2;
                p = sqrt(s * (s - bok_1) * (s - bok_2) * (s - bok_3));
        }
        std::cout << "Pole trójkąta o podanych wymiarach wynosi " << p;
        return 0;

}
