#include <iostream>
using namespace std;

void Absolute(int x) {
    if (x < 0) {
        cout << -x << " ";
    }
    else
        cout << x << " ";
}

int main() {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        Absolute(x);
    }
    return 0;
}