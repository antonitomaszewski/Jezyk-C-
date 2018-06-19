#include <iostream>
#include <limits>
#include <typeinfo>
// Program drukujący minimalne i maksymalne wartości poszczególnych typów
template<typename T>
struct Typ {
        static void drukuj() {
                std::cout << typeid(T).name() << ": zakresem jest (" << std::numeric_limits<T>::min() << ", " << std::numeric_limits<T>::max() << ")" << std::endl;
        }
};

int main()
{
        Typ<bool>::drukuj();
        Typ<char>::drukuj();
        Typ<short>::drukuj();
        Typ<int>::drukuj();
        Typ<long>::drukuj();
        Typ<float>::drukuj();
        Typ<double>::drukuj();
        Typ<long double>::drukuj();
        Typ<unsigned>::drukuj();
        return 0;
}
