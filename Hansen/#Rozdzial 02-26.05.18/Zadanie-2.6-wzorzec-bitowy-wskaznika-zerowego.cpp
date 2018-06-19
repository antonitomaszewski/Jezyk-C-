// wypisywanie bitów pustego wskaźnika do znaków
// nierozumiem

#include <iostream>
#include <limits.h>

union wsk_bity
{
        char *wsk;
        char bajt[sizeof(char*)];
};

#define BITY(type)  (CHAR_BIT * (int) sizeof(type))
#define NAJSTARSZY_BIT(type) ((type) ( ((type) 1) << (BITY(type) - 1)))

void prbits(char bajt)
{
        std::cout << "0b";
        for (unsigned long maska = NAJSTARSZY_BIT(unsigned char); maska !=0; maska >>= 1)
                if ((bajt & maska) != 0)
                        std::cout << "1";
                else
                        std::cout << "0";
        // std::cout << (bajt & maska) ? "1" : "0";

}

int main(int, char**)
{
        wsk_bity pi;
        pi.wsk = 0;

        for (unsigned int i = 0; i < sizeof(char*); i++) {
                std::cout << "bajt" << i << " = ";
                prbits(pi.bajt[i]);
                std::cout << '\n';
        }
}
