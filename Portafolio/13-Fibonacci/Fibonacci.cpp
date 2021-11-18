#include <iostream>
#include <cmath>

int main()
{
    int fib1 = 1, fib2 = 1, n, i;
    do
    {
        std::cout << "Give me a number HIGHER than 1:\n";
        std::cin >> n;
    } while (n <= 1);
    std::cout << "The first " << n << " numbers of the fibonacci serie are:\n";
    std::cout << fib1 << ",";
    for (i = 2; i <= n; i++)
    {
        std::cout << fib2 << ",";
        fib2 = fib1 + fib2;
        fib1 = fib2 - fib1;
    }
    std::cout << "\n";
    system("pause");
}