union foo
{
        double f; // wymusza maksymalne wyrównanie
        long l;
        char a[sizeof(double) > sizeof(long) ? 2 * sizeof(double) : 2*sizeof(long)];
} foovar;


long *ip, ivar;
std::cout << "Typ = long\n";
for (int przesuniecie = 0; przesuniecie < sizeof(long); przesuniecie++) {
        std::cout <<"\tprzesunięcie = " << przesuniecie;
        ip = (long*) &foovar.a[przesuniecie];
        ivar = *ip;
        std::cout << '\n';
}

// wypisywanie komunikatu, gry odebrano sygnał
#include <signal.h>

void trapsig(int signo)
{
        signal(signom, trapsig); // ponowne ustawienie sygnału
        std::cout << ", sygnał " << signo << "przechwycony";
        longjmp(jmpenv, 1);
}

// ...
// inicjowanie przechwytywania sygnałów
(void) signal(SIGEMT, trapsig);

// <tstbadallign.h>
// ta makrodefinicja sprawdza wyrównanie do adresu
// każdego możliwego przesunięcia dla danego typu

#define testuj_zle_wyrownania(typ, typnap)
{
        typ *ip;
        typ ivar;
        int przesuniecie;
        std::cout << "Typ = " << typnap << '\n';

        for (przesuniecie = 0; przesuniecie < sizeof(typ); przesuniecie++) {
                std::cout << "\tprzesunięcie = " << przesuniecie;
                ip = (type*) &foovar.a[przesuniecie];
                if (!setjmp(jmpenv))
                        ivar = *ip;
                std::cout << '\n';
        }
}


// znajdowanie ograniczeń wyrównania adresów różnych typów

#include <iostream>
#include <csetjmp>

jmp_buf jmpenv;

// wypisywanie komunikatu, gdy odebrano sygnał
#include <signal.h>

void trapsig(int signo)
{
        signal(signo, trapsig); // ponowne ustawienie sygnału
        std::cout << ", sygnał " << signo << "przechwycony";
        longjmp(jmpenv, 1);
}

//#include <testuj_zle_wyrownania.h>


int main(int, char**)
{
        union foovar {
                double f; // wymusza maksymalne wyrównanie
                long l;
                char a[sizeof(double) > sizeof(long) ? 2 * sizeof(double) : 2 * sizeof(long)];
        } foovar;
        // inicjowanie przechwytywania sygnałów
        (void) signal(SIGEMT, trapsig);

        testuj_zle_wyrownania(char, "char");
        testuj_zle_wyrownania(short, "short");
        testuj_zle_wyrownania(int, "int");
        testuj_zle_wyrownania(long, "long");
        testuj_zle_wyrownania(float, "float");
        testuj_zle_wyrownania(double, "double");
        testuj_zle_wyrownania(int*, "int*");
        testuj_zle_wyrownania(char, "char*");
        testuj_zle_wyrownania(void, "void*");

        return 0;
}
