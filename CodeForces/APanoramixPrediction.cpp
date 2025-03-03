#include <iostream>
using namespace std;

// Function prototype
bool isPrime(int n);

int main() {
    int x, y;
    cin >> x >> y;
    for (int i = x + 1; i < y; i++) {
        if (isPrime(i)) {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (isPrime(y)) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}

// Function definition
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
