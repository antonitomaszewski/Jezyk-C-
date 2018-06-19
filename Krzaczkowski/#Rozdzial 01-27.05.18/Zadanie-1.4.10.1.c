#include <stdio.h>

int main()
{
        int x, pocz, kon, sr;
        printf("podaj liczbę całkowitą x :");
        scanf("%d", &x);
        pocz = 0;
        kon = x;
        while (kon - pocz > 1) {
                sr = (pocz + kon) / 2;
                if (sr * sr <= x)
                        pocz = sr;
                else
                        kon = sr;
        }
        printf ("Pierwiastek z %d to w przybliżeniu ", x);
        if (x <= 1)
                printf("%d\n", kon);
        else
                printf ("%d\n", pocz);
        return 0;
}
