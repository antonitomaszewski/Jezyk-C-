// wypisywanie cecy i mantysy liczby typu double
// nierozumiem
#include <iostream>


// unia do rozdzielenia typu double
union double_bity
{
        double d;
        struct // tylko dwa pierwsze bajty
        {
                unsigned znak : 1;
                unsigned cecha : 11;
                unsigned mantysa : 4;
        } s_m;
        char c[sizeof(double)]; // 8 bajtów (wszystkie)
};

void prdouble(double d)
{
        double_bity db;
        db.d = d;

        std::cout << d << '\n';
        std::cout << (db.s_m.znak ? "-" : " ");
        std::cout << std::hex << db.s_m.cecha << " "; // 3
        std::cout << std::hex << db.s_m.mantysa;      // 1
        for (unsigned int i = 2; i < sizeof(double); i++)
                std::cout << std::hex << db.c[i] << " "; // 3
        std::cout << '\n';
}

int main(int, char**)
{
        prdouble(3.14);
        return 0;
}
