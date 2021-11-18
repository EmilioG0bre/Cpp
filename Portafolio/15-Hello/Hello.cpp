#include <iostream>

int main()
{
    int i, n;
    std::cout << "How many times you want me to say you hello? ";
    std::cin >> n;
    std::cout << "Using Whiile:";
    i = 1;
    while (i <= n)
    {
        std::cout << "\nHello";
        i = i + 1;
    }
    std::cout << "\nUsing For:";
    for (i = 1; i <= n; i++)
    {
        std::cout << "\nHello";
    }
    std::cout << "\n";
    system("pause");
    return 0;
}