#include <iostream>
#include <string>

constexpr std::string isOdd(int num)
{
    std::string oddOrEven{};

    if (!(+num % 2))
    {
        oddOrEven = "even";
    }
    else if (+num % 2)
    {
        oddOrEven = "odd";
    }

    return oddOrEven;
}

int main()
{
    std::cout << "Enter an integer: ";
    int number{};
    std::cin >> number;

    std::cout << number << " is " << isOdd(number) << '\n';

    return 0;
}