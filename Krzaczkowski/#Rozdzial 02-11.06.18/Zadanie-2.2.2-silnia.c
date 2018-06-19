#include <stdio.h>

int silnia (unsigned int liczba) {
        int i, sil = 1;
        for (i = 2; i <= liczba; i++)
                sil *= i;
        return sil;
}
int main()
{
        int n;
        printf("Podaj liczbę całkowitą: ");
        scanf("%d", &n);
        printf("silnia z %d = %d\n", n, silnia(n));
        return 0;
}
