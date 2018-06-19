/* Napisz funkcję, która dostaje dwa argumenty: wskaźnik na stałą
   typu int i stały wskaźnik na zmienną typu int. I przepisuje zawartość
   stałej wskazywanej przez pierwszy argument do zmiennej wskazywanej
   przez drugi argument. */
#include <stdio.h>
#include <stdlib.h>

void przepisz(int const *a, int *const b) {
        *b = *a;
}
void przepisz_2(int const *a, int *const b) {
        a = b;
}

int main()
{
        int a0 = 1;
        int const *a = &a0;
        int b0 = 0;
        int *const b = &b0;
        printf("a = %d,  b = %d\n", *a, *b);
        przepisz(a, b);
        // przepisz(b, b);
        printf("a = %d,  b = %d\n", *a, *b);


        int const *a1 = &a0;
        int *const b1 = &b0;
        przepisz_2(a1, b1);
        printf("a1 = %d,  b1 = %d\n", *a1, *b1);

}
