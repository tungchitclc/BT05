#include <iostream>
using namespace std;

int factorial(int x) {
    if (x == 0 || x == 1) {
        cout << "factorial(" << x << ") = " << 1 << " at " << &x << endl;
        return 1;
    } else {
        int fact = x * factorial(x-1);
        cout << "factorial(" << x << ") = " << fact << " at " << &x << endl;
        return fact;
    }
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
