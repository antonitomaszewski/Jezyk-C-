#include <iostream>

int* mniejsza(int *a, int *b) {
        if (*a < *b)
                return a;
        else
                return b;
}

int main() {
        int a1 = 6, b1 = 7;
        int *a = &a1, *b = &b1;
        *b = 7;
        std::cout <<  mniejsza(a,b) << std::endl;
}
