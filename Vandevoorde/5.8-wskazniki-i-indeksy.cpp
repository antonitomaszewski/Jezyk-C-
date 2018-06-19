#include <iostream>
#include <time.h>  // Dla clock()
#include <stddef.h>// Dla size_t
#include <string.h>// Dle memcpy()

void kopiuj_ze_wskaznikami(const char *z, char *d_o, size_t n) {
        for (size_t k = 0; k != n; ++k)
                *(d_o++) = *(z++);
}

void kopiuj_z_indeksami(const char *z, char *d_o, size_t n) {
        for (size_t k = 0; k != n; ++k)
                d_o[k] = z[k];
}

int main()
{
        const int l_bajtow = 100000;
        const int l_wywolan = 100;
        char *z = new char[l_bajtow];
        char *d_o = new char[l_bajtow];

        // Zmniejsz efekt stronicowania, sięgając do wszystkich bajtów:
        memcpy(d_o, z, l_bajtow);
        clock_t pocz, kon, czasodw;

        // Test 1 (czas odwołania)
        pocz = clock();
        for (int k = 0; k != l_wywolan; ++k)
                memcpy(d_o, z, l_bajtow);
        kon = clock();
        czasodw = kon - pocz;

        // Test 2 (wskaźniki)
        pocz = clock();
        for (int k = 0; k != l_wywolan; ++k)
                kopiuj_ze_wskaznikami(z, d_o, l_bajtow);
        kon = clock();
        std::cout << "Ze wskaźnikami: " << static_cast<double>(kon-pocz)/czasodw << " razy wolniej niż memcpy.\n";

        // Test 3 (indeksy)
        pocz = clock();
        for (int k = 0; k != l_wywolan; ++k)
                kopiuj_z_indeksami(z, d_o, l_bajtow);
        kon = clock();
        std::cout << "Z indeksami: " << static_cast<double>(kon-pocz)/czasodw << " razy wolniej niż memcpy.\n";

        delete[] z;
        delete[] d_o;
        return 0;

}
