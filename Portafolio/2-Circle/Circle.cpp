#include <iostream>

int main()
{
    float r, c, v;
    std::cout << "Give me the radius of a circle";
    std::cout << "\nRadius: ";
    std::cin >> r;
    c = 2 * 3.14 * r;
    std::cout << "The circumference is: " << c;
    v = 3.14 * (r * r);
    std::cout << "\nThe volume is; " << v;
    return 0;
    system("pause");
}