#include <iostream>

// zamiana dwóch zmiennych całkowitych
// wersja 1
void zamiana_calk(int *a, int *b)
{
        int p = *a;
        *a = *b;
        *b = p;
}
// wywołanie zamiana_calk(&s, &t)

int main()
{
        int a, b;
        a = 1;
        b = 0;

        printf("przed zamianą: a = %d, b = %d\n", a, b);
        zamiana_calk(&a, &b);
        printf("po zamianie: a = %d, b = %d\n", a, b);

        return 0;
}
