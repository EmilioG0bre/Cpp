#include <iostream>

int main(void)
{
    int largest = 0;
    for (int i = 100; i < 1000; ++i)
    {
        for (int b = 100; b < 1000; ++b)
            int currentproduct = i * b;
        std::string currentstring = std::to_string(currentproduct);
    }
}