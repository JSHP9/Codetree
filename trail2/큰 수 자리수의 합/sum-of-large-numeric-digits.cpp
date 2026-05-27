#include <iostream>

using namespace std;

int a, b, c;

int AddSum(int n) {
    if (n < 10)
        return n;
    return AddSum(n / 10) + (n % 10);
}

int main() {
    cin >> a >> b >> c;
    int n = a * b * c;
    cout << AddSum(n);

    return 0;
}