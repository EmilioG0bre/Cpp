#include <iostream>
#include <iomanip>
//Programa que lee dos números de tipo float y muestra la suma, resta y multiplicación de esos números

int main(void)
{
    float n1, n2, sum, abs, mul;
    std::cout << "Give me two Numbers:\n";
    std::cin >> n1 >> n2;
    sum = n1 + n2;
    abs = n1 - n2;
    mul = n1 * n2;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nsum: " << std::fixed << std::setprecision(2) << sum;
    std::cout << "\nabstraction: " << abs;
    std::cout << "\nMultiplication: " << mul << "\n";
    system("pause");
}