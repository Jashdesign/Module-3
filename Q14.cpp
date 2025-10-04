#include <iostream>
using namespace std;

int global = 10;

int main() {
    int local = 5; 

    cout << "Local variable: " << local << endl;
    cout << "Global variable: " << global << endl;

    return 0;
}
