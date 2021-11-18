#include <iostream>
#include <cmath>
int main()
{
    int exp, digit;
    double bin, dec;
    std::cout << "Give me a binary number:\n";
    std::cin >> bin;
    exp = 0;
    dec = 0;
    while (((int)(bin / 10)) != 0)
    {
        digit = (int)bin % 10;
        dec = dec + digit * pow(2, exp);
        exp++;
        bin = (int)(bin / 10);
    }
    dec = dec + bin * pow(2, exp);
    std::cout << "\nDecimal: " << dec << "\n";
    system("pause");
}