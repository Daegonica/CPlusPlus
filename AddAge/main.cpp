#include <iostream>
#include <string>
#include <string_view>

std::string getName(int person)
{
    std::cout << "Enter the name of person #" << person << ": ";
    std::string n{};
    std::getline(std::cin >> std::ws, n);
    return n;
}

int getAge(std::string_view person)
{
    std::cout << "Enter the age of " << person << ": ";
    int a{};
    std::cin >> a;

    return a;
}

int main()
{
    std::string name1{getName(1)};
    const int age1{getAge(name1)};
    std::string name2{getName(2)};
    const int age2{ getAge(name2)};

    if (age2 > age1)
    {
        std::cout << name2 << "(" << age2 << ")" << " is older than " << name1 << "(" << age1 << ")\n";
    }
    else
    {
        std::cout << name1 << "(" << age1 << ")" << " is older than " << name2 << "(" << age2 << ")\n";
    }

    return 0;
}