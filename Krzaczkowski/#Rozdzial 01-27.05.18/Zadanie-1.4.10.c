#include <stdio.h>

int main()
{
        int x, i, pierwiastek = 0;
        printf("podaj liczbę całkowitą x: ");
        scanf("%d", &x);
        for (i = 1; i <= x; i++)
                if (i * i <= x)
                        pierwiastek = i;
        printf ("pierwiastek z %d to w przybliżeniu %d\n", x, pierwiastek);
        return 0;
}
