#include <stdio.h>

int mniejsza(int * a, int * b) {
        if (*a < *b)
                return *a;
        else
                return *b;
}
int mniejsza_2(int *a, int *b) {
        return (*a < *b) ? *a : *b;
}

int main() {
        int a1 = 6, b1 = 7;
        int *a = &a1, *b = &b1;
        *b = 7;
        printf("%d", mniejsza(a,b));
}
