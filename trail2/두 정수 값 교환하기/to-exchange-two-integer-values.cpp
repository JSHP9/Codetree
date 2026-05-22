#include <iostream>
using namespace std;

void Swap(int& n, int& m) {
    int x = n;
    n = m;
    m = x;
}

int main() {
    int n, m;
    cin >> n >> m;
    Swap(n, m);
    cout << n << " " << m;
    return 0;
}