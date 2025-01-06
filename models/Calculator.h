#include "AbsCalculator.cpp"

class Calculator : public AbsCalculator {
    public:
        Calculator();
        double add(double, double);
        double subtract(double, double);
        double multiply(double, double);
        double divide(double, double);
};