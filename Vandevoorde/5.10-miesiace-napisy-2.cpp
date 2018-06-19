#include <iostream>

using std::cout;

int const l_miesiecy = 12;

const char *miesiac[l_miesiecy] = {"Styczeń", "Luty", "Marzec", "Kwiecień", "Maj", "Czerwiec", "Lipiec", "Sierpień", "Wrzesień", "Październik", "Listopad", "Grudzień"};

int main()
{
        for (int k = 0; k != l_miesiecy; k++)
                cout << miesiac[k] << '\n';
        return 0;
}
