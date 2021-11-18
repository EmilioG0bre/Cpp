#include <iostream>

int main()
{
    int s, a = 0, r = 0, i, n;
    std::cout << "How many students are: ";
    std::cin >> s;
    if (s < 1)
    {
        std::cout << "!!!ERROR!!!";
        std::cout << "\nGive me a number HIGHER than 0: ";
        std::cin >> s;
    }
    for (n = 1; n <= s; n++)
    {
        std::cout << "\nsudent->" << n;
        std::cout << "\nScore->";
        std::cin >> i;
        if (i < 1 || i > 100)
        {
            std::cout << "!!!ERROR!!!";
            std::cout << "\nGive me a number between 0 and 100->";
            std::cin >> i;
        }
        if (i >= 70)
        {
            a = a + 1;
        }
        else
        {
            r = r + 1;
        }
    }
    std::cout << "There are " << a << " students that approve\n";
    std::cout << "Thehere are " << r << " students that fail\n";
    system("pause");
}