#include <iostream>

int grabNum()
{
    int num{};
    std::cin >> num;
    return num;
}

int main()
{
    std::cout << "Enter an integer: ";
    int smaller{ grabNum() };

    std::cout << "Enter a larger integer: ";
    int larger{ grabNum() };

    if (smaller > larger)
    {
        std::cout << "Swapping numbers!\n";
        int temp{ smaller };

        smaller = larger;
        larger = temp;

    }

    std::cout << "Small number: " << smaller << '\n';
    std::cout << "Large number: " << larger << '\n';

    return 0;
}