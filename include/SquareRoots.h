#include <iostream>
#include <vector>

class SquareRoots
{
private:
    bool isPrimeFactor(unsigned int number);
    std::vector<unsigned int> getPrimeFactorsByNumber(unsigned int number);
public:
    SquareRoots();
    ~SquareRoots();
    double computePerfectSquare(double number);
};