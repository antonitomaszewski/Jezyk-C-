#include <iostream>

#define testuj_zle_wyrownania(typ, typnap) \
{
        typ *ip;  \
        typ ivar; \
        int przesuniecie; \
        std::cout << "Typ = " << typnap << '\n';  \
          \
        for (przesuniecie = 0; przesuniecie < sizeof(typ); przesuniecie++) {  \
                std::cout << "\tprzesunięcie = " << przesuniecie; \
                ip = (type*) &foovar.a[przesuniecie]; \
                if (!setjmp(jmpenv))  \
                        ivar = *ip;   \
                std::cout << '\n';  \
        }     \
}     \
