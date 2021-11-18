#include <iostream>

int main()
{
    int i = 0;
    float s = 0;
    std::cout << "Four numbers you want to know their average:\n";
    do
    {
        i = i + 1;
        float n;
        std::cout << "Number-" << i << " ";
        std::cin >> n;
        s = s + n;

    } while (i < 4);
    std::cout << "\nThe average is: " << s / 4;
    return 0;
}