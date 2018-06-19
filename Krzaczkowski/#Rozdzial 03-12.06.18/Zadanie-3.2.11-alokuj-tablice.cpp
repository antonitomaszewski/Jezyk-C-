/* Napisz funkcję, która dostaje jako argument dodatnią liczbę
   całkowitą n, rezerwuje w pamięci blok n zmiennych typu int i zwraca
   jako wartość wskaźnik do początku zarezerwowanego bloku pamięci. */
#include <iostream>

int* alokuj(unsigned int n) {
        return new int[n];
}
int main() {
        int *a = alokuj(5);
        for (int i = 0; i < 5; i++)
                a[i] = i+1;
        for (int i = 0; i < 5; i++)
                std::cout << a[i] << " " << a << " " << " " << &*a << " " << (&*&*&*a)[i] << " " << *a << " " << &a[i] <<  std::endl;
}
