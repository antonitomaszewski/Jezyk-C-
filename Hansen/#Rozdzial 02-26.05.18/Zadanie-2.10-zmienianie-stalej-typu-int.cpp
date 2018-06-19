// zmiana wartości stałej
// wersja 1
const jeden = 1;
void zmiana_stalej()
{
        jeden = 2;
}
// błąd

// zmiana wartości stałej
// wersja 2
const jeden = 1;
void zmiana_stalej()
{
        int *p = &jeden;
        *p = 2;
}
// błąd

// zmiana wartości stałej
// wersja 3
const jeden = 1;
void zmiana_stalej()
{
        int *p = (int*) &jeden;
        *p = 2;
}
// nie ma błędu

// zmiana wartości stałej
// wersja 4
const jeden = 1;
#include <memory.h>
void zmiana_stalej()
{
        int dwa = 2;
        memcpy((void*) &jeden, &dwa sizeof(int));
}
// nie ma błedu

// zmiana wartości stałej
// wersja 5
const jeden = 1;
#include <memory.h>
void zmiana_stalej()
{
        int dwa = 2;
        memcpy((void*) &jeden, (char*) &dwa sizeof(int));
}
// brak jakichkolwiek błędów
