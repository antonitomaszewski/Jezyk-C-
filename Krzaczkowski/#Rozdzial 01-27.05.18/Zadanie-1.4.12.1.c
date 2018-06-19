#include <stdio.h>

int nwd(int ax, int bx)
{
        int t;
        while (bx) {
                t = bx;
                bx = ax % bx;
                ax = t;
        }
        return ax;
}
int main()
{
        int n, suma = 0;
        scanf ("%d", &n);
        for (int i = 2; i < n; i++) {
                if (nwd(n,i) == 1)
                        suma += i;
        }
        printf("%d", suma);
        return 0;
}
