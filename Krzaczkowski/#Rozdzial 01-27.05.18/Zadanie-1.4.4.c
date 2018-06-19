#include <stdio.h>

int main()
{
        int n, i, silnia = 1;
        printf("Podaj liczbę całkowitą n:");
        scanf("%d", &n);
        for (i = 2; i <= n; i++)
                silnia *= i;
        printf ("Silnia z %d wynosi %d\n", n, silnia);
        return 0;
}
