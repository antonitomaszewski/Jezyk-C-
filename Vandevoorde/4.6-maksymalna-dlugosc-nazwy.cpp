#include <iostream>

template<typename T, typename U>
struct Podwoic {};
template<int N>
struct Wykladniczo {
        typedef Podwoic<typename Wykladniczo<N-1>::DlugiTyp, typename Wykladniczo<N-1>::DlugiTyp> DlugiTyp;
};

template<>
struct Wykladniczo<0> {
        typedef double DlugiTyp;
};

int f(Wykladniczo<10>::DlugiTyp*) {
        return 3;
}

int main()
{
        // int f(int Wykladniczo<10>::DlugiTyp*);
        // std::cout << f() << std::endl;
}
