#include <cstdint>
#include <iostream>

int main()
{
    std::cout << "Please input a number 0-255: ";
    int b {0};
    std::cin >> b;

    int maxPower{ 128 };


    while (maxPower > 0) 
    {
        if (b >= maxPower)
        {
            std::cout << 1;
            b -= maxPower;
        }
        else
        {
            std::cout << 0;
        }
        maxPower /= 2;
    }

    return 0;
}