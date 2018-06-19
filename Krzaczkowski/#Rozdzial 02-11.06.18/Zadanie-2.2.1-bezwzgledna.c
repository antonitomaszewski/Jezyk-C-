#include <stdio.h>

int bezwzgledna (int liczba) {
        if (liczba < 0)
                return liczba * (-1);
        else
                return liczba;
}
int main()
{
        int n;
        printf("Podaj liczbę całkowitą: ");
        scanf("%d", &n);
        printf("|%d| = %d\n", n, bezwzgledna(n));
        return 0;
}
