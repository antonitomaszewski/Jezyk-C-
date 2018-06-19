#include <iostream>

/* binarny: zapis dwójkowy liczby x do k-tego miejsca po przecinku */
void binarny(double x, int k)
{
        printf("%lf dwojkowo z dokładnością do %d miejsc po przecinku to: 0,", x, k);
        double y = x;
        for (int i = 1; i <= k; i++) {
                //printf("y = %lf\n", y);
                if (y >= (1.0/2.0))
                        printf("1");
                else
                        printf("0");
                y = y * 2;
                if (y >= 1)
                        y = y - 1;
        }
        printf("\n");
}
void wywolanie()
{
        for (int i = 1; i <= 5; i++)
                binarny(0.6, i);
}

void trojkowy(double x, int k)
{
        printf("%lf trojkowo z dokładnością do %d miejsc po przecinku to: 0,", x, k);
        double y = x;
        for (int i = 1; i <= k; i++) {
                if (y >= (2.0/3.0))
                        printf("2");
                else if (y >= (1.0/3.0))
                        printf("1");
                else
                        printf("0");
                y = y * 3;
                if (y >= 2)
                        y = y - 2;
                else if (y >= 1)
                        y = y - 1;
        }
        printf("\n");
}


int main()
{
        //wywolanie();
        binarny(0.6, 5);
        binarny(0.125, 5);
        trojkowy((2.0/4.0), 4);
}
