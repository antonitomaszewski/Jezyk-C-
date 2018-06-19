/* Napisz funkcję, która dostaje dwa argumenty: wskaźnik na stałą
   typu int i wskaźnik na zmienną typu int, i przepisuje zawartość sta-
   łej wskazywanej przez pierwszy argument do zmiennej wskazywanej
   przez drugi argument. */

#include <stdio.h>

void przepisz(int const *a, int *b) {
        *b = *a;
}
void przepisz_2(int *a, int *b) {
        *a = *b;
}
int main()
{
        const int a = 4;
        int b;
        // a = 4;
        b = 3;
        printf("a = %d,  b = %d\n", a, b);
        przepisz(&a, &b);
        printf("a = %d,  b = %d\n", a, b);


        const int a1 = 1;
        int b1 = 0;
        printf("przed: ");
        printf("a1 = %d,  b1 = %d\n", a1, b1);
        printf("wskaznik a1 = %p, wskaznik b1 = %p\n", &a1, &b1);
        przepisz_2((int*) &a1, &b1);
        printf("po: ");
        printf("a1 = %d,  b1 = %d\n", a1, b1);
        printf("wskaznik a1 = %p, wskaznik b1 = %p\n", &a1, &b1);

}
