#include <stdio.h>
#include <math.h>

int main()
{
        int w;
        double bok_1, bok_2, bok_3, h, p, s;
        printf("Obliczy pole trójkąta. Wypisz: \n 1-jeśli chcesz podać długośc podstawy i wysokość. \n 2-jeśli chcesz podać długość trzech boków\n");
        scanf("%d", &w);
        if (w == 1) {
                printf("Podaj długość podstawy trójkąta.");
                scanf("%lf", &bok_1);
                printf("Podaj wysokość trójkąta.");
                scanf("%lf", &h);
                p = bok_1 * h / 2;
        } else {
                printf ("Podaj długość pierwszego boku trójkąta: ");
                scanf("%lf", &bok_1);
                printf ("Podaj długość drugiego boku trójkąta: ");
                scanf("%lf", &bok_2);
                printf ("Podaj długość trzeciego boku trójkąta: ");
                scanf("%lf", &bok_3);

                s = (bok_1 + bok_2 + bok_3) / 2;
                p = sqrt(s * (s - bok_1) * (s - bok_2) * (s - bok_3));
        }
        printf("Pole trójkąta o podanych wymiarach wynosi %f", p);
        return 0;
}
