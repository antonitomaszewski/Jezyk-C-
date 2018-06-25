#include <iostream>

using std::cout;
using std::endl;

int gi = 0;
int f(int a, int b) {
        cout << "(a b gi) = (" << a << ' ' << b << ' ' << gi << ")\n";
        return 0;
        return a + b + gi;  // po co ta funkcja jest typu int?? wystarczyłoby void chyba
}
int hi = 0;
void g(int a, int b) {
        printf("(a b hi) = (%d %d %d)\n", a, b, hi);
}
int main()
{
        f(++gi, ++gi);
        f(1, 2) + f(3, 4);
        // cout << "a = " << a << endl;
        if (f(5, 6) == ++gi);
        f((gi++) + (gi++), 0);
        // cout << "a = " << a << endl;
        gi & 32 / gi;
        // cout << "gi == " << gi;

        g(hi++, hi++);  // argumenty funkcji są obliczne od prawej strony, inkrementacja hi++ najpierw wrzuca wartość do funkcji jako b = hi (0) później hi++, następnie a = hi (1), analogicznie dalej hi++ (2), i w momencie wywołania funkcji hi = 2;
        g(++hi + ++hi, 0);  // powinno być ++2 + ++(++2), 0 czyli g(3 + 4, 0) z hi = 4
        // i tak właśnie jest
        return 0;
}
