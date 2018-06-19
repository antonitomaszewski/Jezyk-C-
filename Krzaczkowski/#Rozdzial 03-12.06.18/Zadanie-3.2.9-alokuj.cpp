#include <iostream>

int* alokuj(){
        return new int;
}

int main()
{
        int *a = alokuj();
        std::cout << a << " " << *a << " " << &a << std::endl;
        *a = 5; // a wskazuje na 5

        std::cout << a << " " << *a << " " << &a;
}
