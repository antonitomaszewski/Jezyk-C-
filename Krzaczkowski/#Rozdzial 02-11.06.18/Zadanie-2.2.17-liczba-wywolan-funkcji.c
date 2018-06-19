/* NIEROZUMIEM */
#include <stdio.h>

void zlicz() {
        static unsigned int liczba = 0;
        liczba++;
        printf("Funckje została wywołana %d razy\n", liczba);
}
