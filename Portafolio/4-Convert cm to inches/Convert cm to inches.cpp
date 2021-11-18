#include <iostream>

int main()
{
    float cm;
    std::cout << "Your measurement in cm: ";
    std::cin >> cm;
    std::cout << "Your measurement in inches: ";
    float in = cm / 2.54;
    std::cout << in << " in\n";
    system("pause");
    return 0;
    system("pause");
}