#include <stdio.h>

int main()
{
        int n, m;
        printf ("Podaj liczbę całkowitą n: ");
        scanf("%d", &n);
        printf ("Podaj liczbę całkowitą m: ");
        scanf("%d", &m);
        for (int i = n; i < m; i += n)
                printf("%d\n", i);
        return 0;
}
