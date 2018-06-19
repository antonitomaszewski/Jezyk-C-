// wypisywanie nazw i dni miesięcy
// wersja 2
#include <iostream>

struct
{
        char *miesiac;
        int dzien;
} md[] =
{
        (char*) "styczeń", 31,
        (char*) "luty", 28,
        (char*) "marzec", 31,
        (char*) "kwiecień", 30,
        (char*) "maj", 31,
        (char*) "czerwiec", 30,
        (char*) "lipiec", 31,
        (char*) "sierpień", 31,
        (char*) "wrzesień", 30,
        (char*) "październik", 31,
        (char*) "listopad", 30,
        (char*) "grudzień", 31
};

int main()
{
        for (int i = 0; i < 12; i++)
                printf("%s %d\n", md[i].miesiac, md[i].dzien);

        return 0;
}
