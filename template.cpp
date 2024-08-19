#include <iostream>

using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
    return a + b;
    }

    T substract(T a, T b) {
    return a - b;
    }

    T divide(T a, T b) {
    return a / b;
    }

    T multiply(T a, T b) {
    return a * b;
    }
};


int main() {

    Calculator<int> intcalculator;

    cout << intcalculator.add(5,8) << endl;
    cout << intcalculator.multiply(5,8) << endl;

    Calculator<float> floatcalculator;

    cout << floatcalculator.substract(7.5,3.2) << endl;
    cout << floatcalculator.divide(3.2,1.6) << endl;

    cin.get();
}