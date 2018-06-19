// drukowanie liczby jako znaku i jego wartości szesnastkowej
#include <iostream>

void pr(int i)
{
        std::cout << (char) i << " " << std::hex <<  i << '\n';
}

int main(int, char**)
{
        for (int i = '0'; i <= 'z'; i++)
                if (isdigit(i) || isalpha(i))
                        pr(i);
        return 0;
}
