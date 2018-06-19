#include <stdio.h>

int pierwiastek_floor(unsigned int x) {
        int pocz = 0, kon = x, sr;
        while (kon - pocz > 1) {
                sr = (pocz + kon) / 2;
                if (sr * sr <= x)
                        pocz = sr;
                else
                        kon = sr;
        }
        if (x <= 1)
                return kon;
        else
                return pocz;
}
void wypisz (unsigned int n) {
        int i, p;
        for (i = 1; i <= pierwiastek_floor(n); i++) {
                p = pierwiastek_floor (n - i * i);
                if ((p != 0) && (i*i + p*p == n))
                        printf( "%d ∗ %d + %d ∗ %d=%d\n", i, i, p, p, n );
        }
}
// Źle było w książce
void wypisz_2 (unsigned int n) {
        int i, p;
        for (i = 1; i <= pierwiastek_floor(n); i++) {
                p = pierwiastek_floor (n - i * i);
                if ((p != 0) && (i <= p) && (i*i + p*p == n))
                        printf( "%d ∗ %d + %d ∗ %d=%d\n", i, i, p, p, n );
        }
}

int main()
{
        for (int i = 0; i < 100; i++) {
                // wypisz(i);
                wypisz_2(i);
                printf("\n");
        }
        for (int i = 0; i < 100; i++)
                printf("pierwiastek_floor(%d) = %d\n", i, pierwiastek_floor(i));
        return 0;
}
