#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the value of n: ";
    cin >> n;

    long long a = 0, b = 1, fib;

    if (n == 1) {
        cout << "Fibonacci term at position " << n << " is: " << a << endl;
    } else if (n == 2) {
        cout << "Fibonacci term at position " << n << " is: " << b << endl;
    } else {
        for (int i = 3; i <= n; ++i) {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << "Fibonacci term at position " << n << " is: " << fib << endl;
    }

    return 0;
}
