#include <stdio.h>

int main()
{
        int liczba;
        printf("Podaj liczbę całkowitą:_");
        scanf("%d", &liczba);
        printf("|liczba| = %d", (liczba >= 0) ? liczba : (-1) * liczba );
        return 0;
}
