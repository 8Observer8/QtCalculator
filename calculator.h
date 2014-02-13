#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdexcept>

class Calculator
{
public:
    double add(double a, double b);
    double sub(double a, double b);
    double mul(double a, double b);
    double div(double a, double b) throw(std::invalid_argument);
};

#endif // CALCULATOR_H
