// przy kompilacji należy użyć komendy -lm, ponieważ została użyta biblioteka math.h
// poprawne wywołanie kompilacji: 'gcc Zadanie-1.2.9.c -lm'

#include <stdio.h>
#include <math.h>

int main()
{
        double x;
        scanf("%lf", &x);
        printf("%f", sqrt(x));
        return 0;
}
