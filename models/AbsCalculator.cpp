using namespace std;

class AbsCalculator {
    public:
        virtual double add(double, double);
        virtual double subtract(double, double);
        virtual double multiply(double, double);
        virtual double divide(double, double);
};