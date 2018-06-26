// 1. Wyjście poza zakres tablicy:
int a[10];
int *p = &a[10];  // a[0...9], a + 10 także, ale nie a[10]

// 2. Użycie usuniętego obietku:
int &r = *new int;
delete &r;
r = r + 1;  // Referencja już nie jest poprawna

// 3. Próba reinterpretacji zmiennych:
int i;
*(float*)&i = 1.0;  // Dostęp z użyciem niezadeklarowanego typu

// 4. Rzutowanie do typu, który nie jest rzeczywistym typem obiektu źródłowego:
struct B {int i;};
struct D : B {};
B* bp = new B;
D* dp = static_cast<D*>(bp);  // niepoprawne rzutowanie

// 5. Rzutowanie powodujące usunięcie atrybutu const obiektu zdefiniowanego z takim atrybutem:
void f(int const &r) {
        const_cast<int&>(r) = 2;
}
const int i1 = 3;
f(i1); // niepoprawne const_cast

// Konstrukcje zdefiniowane przez implementację
// 1. Rozmiar pewnych typów:
sizeof(int);
// 2. Wyprowadzanie na wyjcie type_info::nazwa():
std::cout << typeid(double).nazwa();
// 3. Operatory bitowe:
int tajemnica = ~0;
// 4. Wartości graniczne typów podstawowych:
int mx = numeric_limits<int>::max();
// 5. Liczba kopii tymczasowych:
struct S {
  S (S const&) {
    std:::cout << "Kopia.\n";
  }
};
S f() {
  S a;
  return a;
}
int main()
{
  f();
  return 0;
}
