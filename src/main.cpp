#include <iostream>
#include <vector>
#include <memory>
#include "../include/SquareRoots.h"

int main()
{
    std::unique_ptr<SquareRoots> sr = std::make_unique<SquareRoots>();
    std::println("Square root of 144 : {}", sr.get()->computePerfectSquare(144));
    return 0;
}