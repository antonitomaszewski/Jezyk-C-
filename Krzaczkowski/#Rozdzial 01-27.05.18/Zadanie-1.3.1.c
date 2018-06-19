#include <stdio.h>

int main()
{
        int liczba;
        printf("Podaj liczbę całkowitą:_");
        scanf("%d", &liczba);
        if (liczba < 0)
                liczba *= -1;
        printf("|liczba| = %d", liczba);
        return 0;
}
