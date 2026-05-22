#include <iostream>

using namespace std;

int a;
int c;
char o;

int Add(int a, int c) { return a + c; }
int Sub(int a, int c) { return a - c; }
int Div(int a, int c) { return a / c; }
int Mod(int a, int c) {return a % c; }
int Mul(int a, int c) {return a * c; }

int main() {
    cin >> a >> o >> c;

    int ans;

    if (o == '+') {
        ans = Add(a, c);
    }
    else if (o == '-') {
        ans = Sub(a, c);
    }
    else if (o == '/') {
        ans = Div(a, c);
    }
    else if (o == '%') {
        ans = Mod(a, c);
    }
    else if (o == '*') {
        ans = Mul(a, c);
    }
    else {
        cout << "False";
        return 0;
    }

    cout << a << " " << o << " " << c << " = " << ans;

    return 0;
}