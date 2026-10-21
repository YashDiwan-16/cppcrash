#include <iostream>
using namespace std;

int main() {

    // 1. Implicit Typecasting (Automatic)
    int a = 10;
    float b = a;

    cout << "Implicit: " << b << endl;

    // 2. Explicit Typecasting (Manual)
    float x = 10.75;
    int y = (int)x;

    cout << "Explicit: " << y << endl;

    // 3. Implicit Example
    char ch = 'A';
    int num = ch;

    cout << "Implicit char to int: " << num << endl;

    // 4. Explicit Example
    int p = 5, q = 2;
    float result = (float)p / q;

    cout << "Explicit division: " << result << endl;

    return 0;
}