#include "calculator.h"

double Calculator::add(double a, double b)
{
    return a+b;
}

double Calculator::sub(double a, double b)
{
    return a-b;
}

double Calculator::mul(double a, double b)
{
    return a*b;
}

double Calculator::div(double a, double b) throw(std::invalid_argument)
{
    if (b != 0) {
        return a/b;
    } else {
        throw std::invalid_argument("Divide by zero");
    }
}
