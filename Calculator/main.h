#ifndef CALCULATOR
#define CALCULATOR

#include <tuple>
std::tuple<double, double> askForDoubles();
char askForSymbol();
double calculate(double fn, double sn, char sym);
#endif
