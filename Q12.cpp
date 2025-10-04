#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int modulo(int a,int b){
    return a % b;
}

int main() {
    int a, b;
    int choice;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "\nSelect operation:" << endl;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5.Modulo\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Result: " << divide(a, b) << endl;
            break;
        case 5:
            cout << "Result: " << modulo(a, b) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
