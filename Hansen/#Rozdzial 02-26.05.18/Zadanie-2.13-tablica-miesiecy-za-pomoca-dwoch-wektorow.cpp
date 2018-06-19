// wypisywanie nazw i dni miesięcy
// wersja 1
#include <iostream>

char *miesiace[] = {
        (char*) "styczeń", (char*) "luty",(char*)  "marzec",(char*)  "kwiecień",(char*)  "maj",(char*)  "czerwiec",(char*)  "lipiec",(char*)  "sierpień",(char*)  "wrzesień", (char*)  "październik",(char*)  "listopad",(char*)  "grudzień"
};

int dni[] = {
        31,28,31,30,31,30,31,31,30,31,30,31
};

int main()
{
        for (int i = 0; i < 12; i++)
                printf("%s %d\n",miesiace[i], dni[i]);
        return 0;
}
