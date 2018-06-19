#include <iostream>

int wynik(int i)
{
        if (i < 3)
                return 1;
        else if (i % 2 == 0)
                return wynik(i - 3) + wynik(i - 1) + 1;
        else
                return wynik(i - 1) % 7;
}

void podpunkt_1()
{
        for (int i = 0; i <= 8; i++)
                printf("Funkcja wynik dla: %d daje wynik = %d\n", i, wynik(i));
        printf("\n");
}

void podpunkt_3_max_wart()
{
        int W[1000];
        W[0] = W[1] = W[2] = 1;
        int max_wart = 1, indeks = 0;
        for (int i = 3; i <= 1000; i++) {
                if (i % 2 == 0)
                        W[i] = W[i - 3] + W[i - 1] + 1;
                else
                        W[i] = W[i - 1] % 7;
                if (W[i] > max_wart) {
                        max_wart = W[i];
                        indeks = i;
                }
        }
        printf("Największa wartość funkcji wynik w zakresie do 1000 to %d dla indeksu = %d\n", max_wart, indeks);
}

int main()
{
        podpunkt_1();
        podpunkt_3_max_wart();

        return 0;
}
