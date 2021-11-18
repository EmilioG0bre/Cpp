#include <iostream>
#include <iomanip>
#include <cmath>
/*Programa que calcule:
 -el costo de la compra en dolares sin impuesto
-el costo de la compra en euros sin impuesto
-el impuesto en dolares 
zel impuesto en euros 
-el costo de la compra en dolares
-el costo de la compra en euros
 Introduciendo la cantidad y el precio mas un impuesto de 7% */
int main()
{
    float price, total = 0;
    int items;
    const float tax = 0.07;
    std::cout << "Amount of items: ";
    std::cin >> items;
    std::cout << "Price of each one in MXN: ";
    std::cin >> price;
    total = items * price;
    std::cout << "\nYour Free taxes total in Dolars: " << std::fixed << std::setprecision(2) << total / 20;
    std::cout << "\nYour Free taxes total in Euros: " << std::fixed << std::setprecision(2) << total / 24;
    std::cout << "\nYour Taxes in Dolars: " << std::fixed << std::setprecision(2) << (total * tax) / 20;
    std::cout << "\nYour Taxes in Euros: " << std::fixed << std::setprecision(2) << (total * tax) / 24;
    std::cout << "\nYour Total in Dolars: " << std::fixed << std::setprecision(2) << (total / 20) + ((total * tax) / 20);
    std::cout << "\nYour Total in Euros: " << std::fixed << std::setprecision(2) << (total / 24) + ((total * tax) / 24) << "\n";
    system("pause");
}