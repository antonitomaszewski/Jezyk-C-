#include <iostream>

struct Miesiac {
        const char *nazwa_;
        int dlugosc_;
};

const int l_miesiecy = 12;

const Miesiac miesiac[l_miesiecy] = {{"Styczeń", 31}, {"Luty", 28}, {"Marzec", 31}, {"Kwiecień", 30}, {"Maj", 31}, {"Czerwiec", 30}, {"Lipiec", 31}, {"Sierpień", 31}, {"Wrzesień", 30}, {"Październik", 31}, {"Listopad", 30}, {"Grudzień", 31}};

int main()
{
        for (int k = 0; k != l_miesiecy; ++k)
                std::cout << miesiac[k].nazwa_ << ":\t" << miesiac[k].dlugosc_ << std::endl;
        return 0;
}
