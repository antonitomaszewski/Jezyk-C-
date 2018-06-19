#include <iostream>

int const l_miesiecy = 12;

const char *miesiac[l_miesiecy] = {"Styczeń", "Luty", "Marzec", "Kwiecień", "Maj", "Czerwiec", "Lipiec", "Sierpień", "Wrzesień", "Październik", "Listopad", "Grudzień"};

const int dlugosci_miesiecy[l_miesiecy] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
        for (int k = 0; k != l_miesiecy; ++k)
                std::cout << miesiac[k] << ":\t" << dlugosci_miesiecy[k] << std::endl;
        return 0;
}
