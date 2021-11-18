#include <iostream>

int main()
{
    int num, invnum = 0;
    std::cout << "Give me a number: ";
    std::cin >> num;
    while (num > 0)
    {
        int rest = num % 10;
        num = num / 10;
        invnum = invnum * 10 + rest;
    }
    std::cout << "The inverted number is: " << invnum << "\n";
    system("pause");
    return 0;
}
