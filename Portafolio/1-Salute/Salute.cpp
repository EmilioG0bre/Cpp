#include <iostream>
int main()
{
    char name[15];
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello " << name << "\n";
    system("pause");
    return 0;
}