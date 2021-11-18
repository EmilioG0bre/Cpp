#include <iostream>
#include <cmath>
/*
Programa que calcule la suma de la serie 2+22+23+…2n
Para un valor entero positivo de (n) introducido.
*/
int main()
{
    int n, s = 0, i;
    do
    {
        std::cout << "introduce a number: ";
        std::cin >> n;
        if (n <= 0)
        {

            std::cout << "!!!ERROR!!!\n"
                      << "You can not have a number lower than 1\n";
        }
    } while (n <= 0);
    for (i = 1; i <= n; i++)
    {
        s = s + pow(2, i);
    }
    std::cout << "The factorial of 2 to the power of " << n << " is " << s << "\n";
    system("pause");
    return 0;
}