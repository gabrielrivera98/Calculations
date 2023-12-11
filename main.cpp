#include "functions.h"
#include <iostream>

int main()
{
    int x{userInput()};
    int y{userInput()};

    std::cout << "The value: " << x << " + " << y << " is: " << add(x, y) <<
    ". The values multiplied: " << mult(x, y) << ". Finally subtraction: " <<
    sub(x, y) << std::endl;

    return 0;
}
