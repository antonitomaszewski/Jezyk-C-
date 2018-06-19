// nierozumiem

#include <iostream>
#include <csetjmp>
#include <csignal>



void trapsig(int signo)
{
        signal(signo, trapsig); // ponowne ustawienie sygnału
        std::cout << ", sygnał " << signo << "przechwycony";
        longjmp(jmpenv, 1);
}




int main(int, char**)
{
        union foovar {
                double f; // wymusza maksymalne wyrównanie
                long l;
                char a[sizeof(double) > sizeof(long) ? 2 * sizeof(double) : 2 * sizeof(long)];
        } foovar;
        // inicjowanie przechwytywania sygnałów
        (void) signal(SIGINT, trapsig);

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
