#include <iostream>
#include <cmath>

int main()
{
    int day, sec;
    std::cout << "Give me your Seconds: ";
    std::cin >> sec;
    day = (((sec / 60) / 60) / 24);
    std::cout << "There are " << day << " days in " << sec << " seconds";
}