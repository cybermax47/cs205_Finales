#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 0;
    int result = 0;

    
    for (int i = 0; i <= a; ++i) {
        b += i;
    }

    if (b != 0) {
        result = a / b;
    } else {
        cout << "Division by zero avoided." << endl;
    }
 
    cout << "Result: " << result << endl;

    int c = 2;
    cout << "Initialized variable c: " << c << endl;

    int d = 10;
    while (d >= 0) {
        cout << "d: " << d << endl;
        d--; // Decrement d to avoid infinite loop
    }

    int array[3] = {1, 2, 3};
    for (int i = 0; i < 3; ++i) {
        cout << "array[" << i << "]: " << array[i] << endl;
    }

    return 0;
}
