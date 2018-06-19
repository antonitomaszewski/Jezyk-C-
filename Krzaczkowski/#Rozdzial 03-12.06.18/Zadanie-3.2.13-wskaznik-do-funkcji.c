/* Napisz funkcję o dwóch argumentach:
   — wskaźnik na funkcję o jednym argumencie typu int zwracającą
   wartość typu double,
   — wartość typu int,
   która zwraca wartość funkcji otrzymanej w pierwszym argumencie na
   liczbie całkowitej podanej w drugim argumencie. */
#include <stdio.h>

double wywolaj(double (*fun)(int arg), int a) {
        return fun(a);
}

double f(int a) {
        return (double) a;
}
int main()
{
        printf("%lf\n", wywolaj(*f, 5));
        printf("%lf\n", wywolaj(f, 1));
}
