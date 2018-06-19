// drukowanie w sposób przenośny wszystkich znaków dających się wydrukować
// wersja 2
#include <iostream>
#include <limits.h>

void pr (int i)
{
        std::cout << (char) i << " " << i << '\n';
}
int main(int, char**)
{
        for (int i = 0; i < CHAR_MAX; i++)  // ósemkowo 0 - 0177, szesnastkowo 0 - 0x7F
                if (isprint(i))
                        pr(i);
        return 0;
}
