#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mult(int x, int y)
{
    return x * y;
}

int userInput()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}