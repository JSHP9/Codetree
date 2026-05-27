#include <iostream>

using namespace std;

int n;
int cnt;

int Sequence(int n) {
    if (n == 1)
        return cnt;
    cnt++;
    if (n % 2 == 0)
        return Sequence(n / 2);
    else
        return Sequence(3 * n + 1);
}

int main() {
    cin >> n;
    cout << Sequence(n);
    return 0;
}