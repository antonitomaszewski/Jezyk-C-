#include <iostream>

void zamien (int &a, int &b) {
        int pom;
        pom = a;
        a = b;
        b = pom;
}
int main() {
        int a1 = 6, b1 = 7;
        int *a = &a1, *b = &b1;
        *b = 7;
        std::cout << *a << " " << *b << std::endl;
        std::cout << a << " " << b << std::endl;
        std::cout << &a << " " << &b << std::endl;
        // zamien(a1,b1);
        zamien(*a, *b);
        // zamien(a, b);
        std::cout << *a << " " << *b << std::endl;
        std::cout << a << " " << b << std::endl;
        std::cout << &a << " " << &b << std::endl;

        std::cout << std::endl;

        std::cout << a1 << " " << b1 << std::endl;
        std::cout << &a1 << " " << &b1 << std::endl;

        zamien(a1, b1);

        std::cout << a1 << " " << b1 << std::endl;
        std::cout << &a1 << " " << &b1 << std::endl;
        if (a == &a1)
                std::cout << "TAK\n";
}
