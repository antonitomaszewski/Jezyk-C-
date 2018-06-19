#include <stdio.h>

void funk(int n)
{
        int pom_1, pom_2, suma = 0, i;

        for (i = 2; i < n; i++) {
                pom_1 = n;
                pom_2 = i;
                while (pom_1 * pom_2 != 0)
                        if (pom_1 < pom_2)
                                pom_2 = pom_2 % pom_1;
                        else
                                pom_1 = pom_1 % pom_2;
                if ((pom_1 == 1) || (pom_2 == 1))
                        suma += i;
        }
        printf ("Wynik obliczeń dla %d to: %d\n", n, suma);
}
int main()
{
        for (int i = 0; i < 100; i++)
                funk(i);
        // int n, pom_1, pom_2, suma = 0, i;
        //
        // printf ("Podaj liczbę całkowitą n: ");
        // scanf ("%d", &n);
        // for (i = 2; i < n; i++) {
        //         pom_1 = n;
        //         pom_2 = i;
        //         while (pom_1 * pom_2 != 0)
        //                 if (pom_1 < pom_2)
        //                         pom_2 = pom_2 % pom_1;
        //                 else
        //                         pom_1 = pom_1 % pom_2;
        // }
        // if ((pom_1 == 1) || (pom_2 == 1))
        //         suma += i;
        // printf ("Wynik obliczeń to: %d\n", suma);
        return 0;
}
