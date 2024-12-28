#include "SquareRoots.h"
#include <iostream>

SquareRoots::SquareRoots()
{
}

SquareRoots::~SquareRoots()
{
}

bool SquareRoots::isPrimeFactor(unsigned int number)
{
    int numberOfFactors = 0;
    for (unsigned int i = 1; i <= number; i++)
    {

        if (numberOfFactors > 2)
        {
            break;
        }

        if (number % i == 0)
        {
            numberOfFactors++;
        }
    }

    if (numberOfFactors == 2)
    {
        return true;
    }

    return false;
}

std::vector<unsigned int> SquareRoots::getPrimeFactorsByNumber(unsigned int number)
{
    std::vector<unsigned int> primeFactors;
    unsigned int i = 2;
    unsigned int result = number;

    while (result != 1)
    {
        if (this->isPrimeFactor(i) && result % i == 0)
        {
            result /= i;
            primeFactors.push_back(i);
            continue;
        }
        i++;
    }
    return primeFactors;
}

double SquareRoots::computePerfectSquare(double number)
{
    std::vector<unsigned int> primeFactors = this->getPrimeFactorsByNumber(number);
    double result = 1;

    for (unsigned int i = 0; i < primeFactors.size(); i += 2)
    {
        result *= primeFactors.at(i);
    }

    return result;
}
