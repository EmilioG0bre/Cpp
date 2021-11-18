#include <iostream>

int main()
{
    int n, i;
    long double fact;
    std::cout << "Give me a number to get his factorial: ";
    std::cin >> n;
    fact = 1;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    std::cout << "\nThe factorial of " << n << " is " << fact << "\n";
    system("pause");
}