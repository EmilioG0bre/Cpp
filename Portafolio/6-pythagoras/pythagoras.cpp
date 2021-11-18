#include <iostream>
#include <math.h>

int main()
{
    float catA, catB, hyp2, hyp;
    std::cout << "Give me your two cathetus\n";
    std::cout << "Cathetus A: ";
    std::cin >> catA;
    std::cout << "Cathetus B: ";
    std::cin >> catB;
    hyp2 = ((catA * catA) + (catB * catB));
    hyp = sqrt(hyp2);
    std::cout << "Hypotenuse: " << hyp;
    return 0;
}