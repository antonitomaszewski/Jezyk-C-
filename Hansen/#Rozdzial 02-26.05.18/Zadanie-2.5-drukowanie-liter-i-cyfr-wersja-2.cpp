#include <iostream>
#include <ctype.h>

void pr(int i)
{
        printf("%d %c\n", i, i);
}

int main(int, char**)
{
        for (int i = '0'; i <= 'z'; i++)
                pr(i);
        return 0;
}
