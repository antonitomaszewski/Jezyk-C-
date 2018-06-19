// "oczywiste" drukowanie liter i cyfr
// wersja 1
#include <iostream>

int main(int, char**)
{
        for (int ch = 'a'; ch <= 'z'; ch++)
                printf("%c %d\n", ch, ch);
        for (int ch = '0'; ch <= '9'; ch++)
                printf("%c %d\n", ch, ch);
        return 0;
}
