#include <iostream>
using namespace std;

int cnt = 0;

bool Check369(int n) {
    while(n != 0) {
        int m = n % 10;
        n = n / 10;
        if (m == 3 || m == 6 || m == 9) {
            return true;
        }
    }
    return false;
}

int ThreeMultiple(int a, int b) {
    for (int i = a; i <= b; ++i) {
        if (i % 3 == 0) {
            cnt++;
            continue;
        }
        else if(Check369(i))
            cnt++;
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = ThreeMultiple(a, b);
    cout << cnt;
    return 0;
}