/* Napisz funkcję, która dostaje jako argument dodatnią liczbę
   całkowitą n, rezerwuje w pamięci blok n zmiennych typu int i zwraca
   jako wartość wskaźnik do początku zarezerwowanego bloku pamięci. */
#include <stdlib.h>

int* alokuj(unsigned int n) {
        return (int*) malloc(n * sizeof(int));
}
