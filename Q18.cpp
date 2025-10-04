#include <iostream>
using namespace std;

class Calculator {
public:
    int add(float a, float b) {
        return a + b;
    }

    int subtract(float a, float b) {
        return a - b;
    }

    int multiply(float a, float b) {
        return a * b;
    }

    int divide(float a, float b) {
        return a / b;
    }
};

int main() {
    Calculator calc;
    float num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nAddition: " << calc.add(num1, num2);
    cout << "\nSubtraction: " << calc.subtract(num1, num2);
    cout << "\nMultiplication: " << calc.multiply(num1, num2);
    cout << "\nDivision: " << calc.divide(num1, num2) << endl;

    return 0;
}