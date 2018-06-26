#include <iostream>

void zamien_wartosci(int *p1, int *p2) {
        int pom = *p1;
        *p1 = *p2;
        *p2 = pom;
}

void zamien_wartosci_2(int &v1, int &v2) {
        int pom = v1;
        v1 = v2;
        v2 = pom;
}

void zamien_wartosci_3(int &v1, int &v2) {
        v1 = v1^v2;
        v2 = v1^v2;
        v1 = v1^v2;
}

int main()
{
        int a = 1;
        int b = 0;
        printf("Na początku a = %d, b = %d\n", a, b);
        zamien_wartosci(&a, &b);
        printf("Po zamien_wartosci(&a, &b): a = %d, b = %d\n", a, b);
        zamien_wartosci_2(a, b);
        printf("Po zamien_wartosci_2(a, b): a = %d, b = %d\n", a, b);
        zamien_wartosci_3(a, b);
        printf("Po zamien_wartosci_3(a, b): a = %d, b = %d\n", a, b);

        int *a1 = new int(1);
        int *b1 = new int(0);
        printf("Na początku *a1 = new int(%d), *b1 = new int(%d)\n", *a1, *b1);
        zamien_wartosci(a1, b1);
        printf("Po zamien_wartosci(a1, b1): *a1 = %d, *b1 = %d\n", *a1, *b1);
        zamien_wartosci_2(*a1, *b1);
        printf("Po zamien_wartosci_2(*a1, *b1): *a1 = %d, *b1 = %d\n", *a1, *b1);
        zamien_wartosci_3(*a1, *b1);
        printf("Po zamien_wartosci_3(*a1, *b1): *a1 = %d, *b1 = %d\n", *a1, *b1);









}
