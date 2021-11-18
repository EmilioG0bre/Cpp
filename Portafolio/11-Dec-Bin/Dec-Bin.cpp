#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
    int num, exp, digit;
    double binary;
    std::cout << "Give me a number:\n";
    std::cin >> num;
    exp = 0;
    binary = 0;
    while (num / 2 != 0)
    {
        digit = num % 2;
        binary = binary + digit * pow(10, exp);
        exp++;
        num = num / 2;
    }
    binary = binary + num * pow(10, exp);
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "binary: " << binary << "\n";
    system("pause");
}