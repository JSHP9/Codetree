#include <iostream>
using namespace std;

int Min(int a, int b, int c) {
    int m = (a > b) ? b : a;
    int min = (c > m) ? m : c;
    return min;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min = Min(a, b, c);
    cout << min;
    return 0;
}