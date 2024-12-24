#include <iostream>
#include <vector>
#include <memory>
#include "../include/SquareRoots.h"

int main()
{
    std::unique_ptr<SquareRoots> sr = std::make_unique<SquareRoots>();
    std::string result = std::to_string(sr.get()->computePerfectSquare(144));
    std::println("Square root of 144 : {}", result);
    return 0;
}