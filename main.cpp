#include <iostream>
#include <vector>
#include <memory>
#include "SquareRoots.h"

int main()
{
    unsigned int number;
    std::println("Choose a number");
    std::cin >> number;
    std::unique_ptr<SquareRoots> sr = std::make_unique<SquareRoots>();
    std::println("Square root of {} : {}", number, sr.get()->computePerfectSquare(number));
    return 0;
}