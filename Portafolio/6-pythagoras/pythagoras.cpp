#include <iostream>
#include <math.h>

int main()
{
    float catA, catB, hyp2, hyp;
    std::cout << "Give me your two Triangle Legs\n";
    std::cout << "Leg A: ";
    std::cin >> catA;
    std::cout << "Leg B: ";
    std::cin >> catB;
    hyp2 = ((catA * catA) + (catB * catB));
    hyp = sqrt(hyp2);
    std::cout << "Hypotenuse: " << hyp;
    return 0;
    system("pause");
}