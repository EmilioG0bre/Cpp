#include <iostream>

int main()
{
    int year;
    std::cout << "Give me the Year:\n";
    std::cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        std::cout << "leap\n";
    else
        std::cout << "not leap\n";

    system("pause");
}