#include "main.h"
#include <iostream>


// Need a function for retrieving user doubles
std::tuple<double, double> askForDoubles()
{
    double firstNum{}, secondNum{};

    std::cout << "Enter a double value: ";
    std::cin >> firstNum;

    std::cout << "Enter a double value: ";
    std::cin >> secondNum;

    return std::make_tuple(firstNum, secondNum);
}

// Need a function for retrieving user symbol
char askForSymbol()
{
    char symbol{};

    std::cout << "Enter +, -, *, or /: ";
    std::cin >> symbol;

    return symbol;
}

// Need a function that uses the symbol against the two digits
double calculate(double fn, double sn, char sym)
{
    if (sym == '*')
    {
        return fn * sn;
    }
    else if (sym == '/')
    {
        return fn / sn;
    }
    else if (sym == '-')
    {
        return fn - sn;
    }
    else if (sym == '+')
    {
        return fn + sn;
    }
    else
    {
        return 404;
    }
}
