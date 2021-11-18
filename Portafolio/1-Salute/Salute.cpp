#include <iostream>
int main()
{
    char name[15];
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello " << name;
    return 0;
    system("pause");
}