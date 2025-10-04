#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "\nRelational Operators:" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    cout << "\nLogical Operators:" << endl;
    bool x = true, y = false;
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;
    cout << "!x     : " << (!x) << endl;
    cout << "!y     : " << (!y) << endl;

    cout << "\nBitwise Operators: " << endl;
    cout << "a & b (AND)  = " << (a & b) << endl;
    cout << "a | b (OR)   = " << (a | b) << endl;
    cout << "a ^ b (XOR)  = " << (a ^ b) << endl;
    cout << "~a (NOT)     = " << (~a) << endl;
    cout << "a << 1 (Left Shift)  = " << (a << 1) << endl;
    cout << "a >> 1 (Right Shift) = " << (a >> 1) << endl;

    return 0;
}