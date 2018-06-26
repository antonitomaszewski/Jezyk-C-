#include <iostream> // sprintf

namespace { const char cyfra[] = "0123456789"; }

void itoa(int i, char b[]) {
        char *p = b;
        if (i < 0) { // Dodaj znak, jeśli jest potrzebny
                *p = '-';
                p++;
                i = -i;
        }     // wstawiamy znak na sam początek, jeśli jest ujemny
        int przesuwacz = i;
        do {  // Przejdź do miejsca, gdzie reprezentacja się kończy
                ++p;
                przesuwacz = przesuwacz/10;
        } while (przesuwacz); // przesuwam o floor(log10(i)) + 1 wskaźnik na prawo
        *p = '\0';  // na koniec wrrzucam znak końca tekstu
        do {  // Wracaj, wstawiając po drodze cyfry
                --p; // cofamy się o jeden wrzucając na dane miejsce najmniej znaczącą obecnie cyfrę i jedności, dziesiątek, ..., aż do najbardziej znaczącej
                *p = cyfra[i % 10];
                i = i / 10;  // skracamy liczbę, o właśnie dodaną cyfrę
        } while (i); // dopóki nie doszliśmy do zera
        return;
}

char* itoa_2(int i, char b[]) {
        sprintf(b, "%d", i);
        return b;
}

int main()
{
        char* a = new char;
        itoa(10, a);
        std::cout << "a = " << a << std::endl;
        itoa(-1, a);
        std::cout << "a = " << a << std::endl;

}
