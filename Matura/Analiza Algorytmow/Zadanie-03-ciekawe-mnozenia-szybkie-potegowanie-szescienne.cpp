#include <iostream>


// hipoteza: to jest szybkie potęgowanie sześcienne
int F(int x, int n)
{
        printf("x = %d, n = %d\n", x, n);
        if (n == 1) {
                return x;
        } else if (n % 3 == 0) {
                int k = F(x, n / 3);
                return k * k * k;
        } else {
                return x * F(x, n - 1);
        }
}

int main()
{
        int x, n;
        x = 2; n = 2;
        printf("dla x = %d, n = %d wynik = %d\n\n", x, n, F(x, n));
        x = 3; n = 5;
        printf("dla x = %d, n = %d wynik = %d\n\n", x, n, F(x, n));
        x = 2; n = 5;
        printf("dla x = %d, n = %d wynik = %d\n\n", x, n, F(x, n));
        x = 2; n = 8;
        printf("dla x = %d, n = %d wynik = %d\n\n", x, n, F(x, n));
        x = 2; n = 10;
        printf("dla x = %d, n = %d wynik = %d\n\n", x, n, F(x, n));
        x = 2; n = 8;
        printf("dla x = %d, n = %d wynik = %d\n\n", x, n, F(x, n));
}
