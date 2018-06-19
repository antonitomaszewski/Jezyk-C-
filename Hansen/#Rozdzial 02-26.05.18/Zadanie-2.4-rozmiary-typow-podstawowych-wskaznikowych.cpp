//Zadanie-2.4-rozmiary-typow-podstawowych-wskaznikowych.cpp
#include <iostream>
#include <string>

void pr(std::string typ, unsigned int rozmiar)
{
        std::cout << "sizeof(" << typ << ") = " << rozmiar << '\n';
}

int main(int, char**)
{
        // std::cout << "sizeof(" << "char" << ") = " << sizeof(char) << '\n';
        pr("char", sizeof (char));
        pr("short", sizeof(short));
        pr("int", sizeof(int));
        pr("long", sizeof(long));

        pr("unsigned char", sizeof(unsigned char));
        pr("unsigned short", sizeof(unsigned short));
        pr("unsigned int", sizeof(unsigned int));
        pr("unsigned long", sizeof(unsigned long));

        pr("float", sizeof(float));
        pr("double", sizeof(double));

        pr("void *", sizeof(void *));
        pr("char *", sizeof(char *));
        pr("short *", sizeof(short *));
        pr("int *", sizeof(int *));
        pr("long *", sizeof(long *));

        pr("unsigned char *", sizeof(unsigned char*));
        pr("unsigned short *", sizeof(unsigned short*));
        pr("unsigned int *", sizeof(unsigned int*));
        pr("unsigned long *", sizeof(unsigned long*));

        pr("float *", sizeof(float*));
        pr("double *", sizeof(double*));
        pr("int (*) ()", sizeof(int (*)()));

        return 0;
}
