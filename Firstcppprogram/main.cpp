#include "main.h"
#include <iostream>

int main()
{
    std::cout << "Starting system.\n";

    auto [fn, sn]   {askForDoubles()};
    char sym        {askForSymbol()};
    double answer   {calculate(fn, sn, sym)};

    if (answer == 404)
    {
        std::cout << "Invalid Symbol." << '\n';
    }
    else
    {
        std::cout << fn << " " << sym << " " << sn << " is " << answer << '\n';
    }

    std::cout << "System finished.\n";

    return 0;
}
