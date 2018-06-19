#include <iostream>
#include <typeinfo>
// Ten Program drukuje kolejne wielkości typów odpowiadajęce wyglądzie na ekranie chyba
template<typename T>
struct Typ {
        static void drukuj() {
                std::cout << "sizeof(" << typeid(T).name() << ") = " << sizeof(T) << std::endl;
        }
};

struct Polimorfizm {
        virtual ~Polimorfizm() {
        };
};

enum Bit { zero, jeden };
enum Intensywnosc { czarny = 0, najjasniejszy = 1000 };

int main()
{
        // Podstawowy typy całościowe
        std::cout << "Typy całkowite: \n";
        Typ<bool>::drukuj(); // Nie musi być równe jeden (u niego było)
        Typ<char>::drukuj(); // To musi być równe jeden -- pojedynczy znak, ale przecież ASCII litery sa od 65 - 1..
        Typ<signed char>::drukuj();
        Typ<unsigned char>::drukuj();
        Typ<wchar_t>::drukuj(); // Nie ma wariantów ze znakiem i bez znaku
        Typ<signed short>::drukuj();
        Typ<unsigned short>::drukuj();
        Typ<signed int>::drukuj();
        Typ<unsigned int>::drukuj();
        Typ<signed long>::drukuj();
        Typ<unsigned long>::drukuj();
        // #ifdef LONGLONG_EXT
        Typ<signed long long>::drukuj();
        Typ<unsigned long long>::drukuj();
        // #endif

        // Podstawowe typy zmiennopozycyjne
        std::cout << "Typy zmiennopozycyjne: \n";
        Typ<float>::drukuj();
        Typ<double>::drukuj();
        Typ<long double>::drukuj();

        // Typy wskaźnikowe
        std::cout << "Typy wskaźnikowe: \n";
        Typ<int*>::drukuj();
        Typ<int (*)()>::drukuj(); // wskaźnik do funkcji
        Typ<void (Polimorfizm::*)()>::drukuj(); // Wskaźnik do funkcji składowej
        Typ<void*>::drukuj();  // Może być większe niż int* (ale rzadko)

        // Typy Wiliczeniowe
        std::cout << "Typy wyliczeniowe: \n";
        Typ<Bit>::drukuj();
        Typ<Intensywnosc>::drukuj();
        return 00;
}
