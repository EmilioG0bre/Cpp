#include <iostream>
#include <iomanip>
#include <cmath>
/*Circumference Long = 2*PI*Radio
Circumference area = PI*Radio^2
Sphere Volume = (4/3)*PI*Radio^3 */

int main(void)
{
    const float Pi = 3.1416;
    float R;
    std::cout << "Give me your Radius? ";
    std::cin >> R;
    std::cout << "\nCircumference: " << std::fixed << std::setprecision(2) << 2 * Pi * R;
    std::cout << "\nCircle Area: " << Pi * pow(R, 2);
    std::cout << "\nSphere Volume: " << 4 * Pi * pow(R, 3) / 3 << "\n";
    system("pause");
}