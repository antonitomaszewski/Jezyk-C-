#include <iostream>

int main()
{
        float f;
        std::cin >> f;
        std::cout.precision(2);
        std::cout.setf (std::ios::fixed, std::ios::floatfield);
        std::cout << std::fixed << f;
        return 0;
}
