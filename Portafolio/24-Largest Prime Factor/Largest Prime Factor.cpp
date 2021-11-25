#include <iostream>
#include <cmath>

int main()
{
    long long int num = 600851475143, highest = 0, current = 2;
    while (num > highest)
    {
        if ((num % current == 0) && (current > highest))
        {
            highest = current;
            num /= current;
        }
        else
        {
            current++;
        }
    }

    std::cout << highest << "\n";
    system("pause");
}