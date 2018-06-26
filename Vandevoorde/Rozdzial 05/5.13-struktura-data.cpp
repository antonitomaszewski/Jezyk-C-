/* NIEROZUMIEM */

#include <iostream>
#include <stdlib.h>

struct Data {
        unsigned dzien_ : 5; // Pole bitowe: użyj tylko 5 bitów do reprezentowania tej składowej całkowitej dzien_ < 2^5

        unsigned miesiac_ : 4; // miesiac_ < 2^4
        int rok_ : 15;  // rok_ < 2^15??
};

std::istream& operator >> (std::istream &wejscie, Data &d) {
        const int rozmbuf = 6;
        char bufor[rozmbuf];
        wejscie.getline(bufor, rozmbuf, '/'); // wc
        d.miesiac_ = atoi(bufor); // z ascii do int
        wejscie.getline(bufor, rozmbuf, '/');
        d.dzien_ = atoi(bufor);
        int y;
        wejscie >> y;
        d.rok_ = y;
        return wejscie;
}

std::ostream& operator << (std::ostream &wyjscie, Data &d) {
        wyjscie << d.miesiac_ << '/' << d.dzien_ << '/' << d.rok_ << std::endl;
        return wyjscie;
}

Data& inicjuj(Data &d, unsigned dzien, unsigned miesiac, int rok) {
        d.dzien_ = dzien;
        d.miesiac_ = miesiac;
        d.rok_ = rok;
        return d;
}

int main()
{
        using std::cin;
        using std::cout;
        Data d;
        cin >> d; //1-12/1-31/-2^14 -- 2^14??
        cout << d;
}
