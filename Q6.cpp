#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 2;

    double result1 = a / b; 

    double result2 = (double)a / b; 

    cout << "Implicit Conversion (a / b): " << result1 << endl;
    cout << "Explicit Conversion ((double)a / b): " << result2 << endl;

    return 0;
}
