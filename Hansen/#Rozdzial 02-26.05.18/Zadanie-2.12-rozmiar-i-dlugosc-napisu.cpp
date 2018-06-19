// wypisywanie rozmiaru tablicy
#include <iostream>
#include <string>
#include <cstring>

char Nap[] = "krótki napis";

int main()
{
        std::cout << "sizeof(Nap) = " << sizeof(Nap) << '\n';
        std::cout << "strlen(Nap) = " << strlen(Nap) << '\n';
        std::cout << "sizeof(\"krótki napis\") = " << sizeof("krótki napis") << '\n';
        std::cout << "strlen(\"krótki napis\") = " << strlen("krótki napis") << '\n';
        for (int i = 0; i < 14; i++)
                printf("%c\n", Nap[i]);

        // char c = 'ó'; // multi character constant  długość 2
        // printf("%c", c);
        // char c[2]; // multi character constant  długość 2
        // c = 'ó';
        // printf("%s", c);

        return 0;
}
