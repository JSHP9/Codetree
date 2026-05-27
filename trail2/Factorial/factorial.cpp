#include <iostream>

using namespace std;

int N;

int Fac(int n) {
    if (n == 1) 
        return 1;
    return n * Fac(n - 1);
}

int main() {
    cin >> N;
    cout << Fac(N);
    return 0;
}