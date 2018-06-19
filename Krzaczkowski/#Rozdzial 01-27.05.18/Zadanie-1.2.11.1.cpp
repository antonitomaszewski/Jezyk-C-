#include <iostream>
using namespace std;

int main()
{
        float f;
        cin >> f;
        cout.precision(2);
        cout.setf (ios::fixed, ios::floatfield);
        cout << fixed << f;
        return 0;
}
