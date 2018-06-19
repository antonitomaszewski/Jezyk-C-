#include <stdio.h>

int main()
{
        int i;
        double a, b, h, p;
        printf("Pole jakiej figury chcesz policzyń?\n");
        printf("1 - kwadrat\n");
        printf("2 - prostokąt\n");
        printf("3 - trójkąt\n");
        scanf("%d", &i);
        switch (i) {
        case 1: printf ("Podaj długość boku kwadratu");
                scanf("%lf", &a);
                p = a * a;
                break;
        case 2: printf ("Podaj długość boków prostokata");
                scanf ("%lf %lf", &a, &b);
                p = a * b;
                break;
        case 3: printf ("Podaj długość podstawy i wysokość trójkąta");
                scanf("%lf %lf", &a, &h);
                p = 0.5 * a * h;

        }
        printf ("Pole figury to %f\n", p);
        return 0;
}
