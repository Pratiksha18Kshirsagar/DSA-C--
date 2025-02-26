#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return -1; // Invalid input
    if (n == 1) return 0;
    if (n == 2) return 1;

    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n = 10;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
