#include <stdio.h>

int main()
{
        int n, i, fib_1 = 1, fib_2 = 1, pom;
        printf ("Podaj liczbę całkowitą n:");
        scanf("%d", &n);
        for (i = 2; i <= n; i++) {
                pom = fib_1;
                fib_1 = fib_1 + fib_2;
                fib_2 = pom;
        }
        printf("Elem ciągu Fibonacciego o indeksie %d to %d\n", n, fib_1);
        return 0;
}
