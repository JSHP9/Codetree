#include <iostream>
using namespace std;

bool YesOrNo(int n) {
    return n % 2 == 0 && (n / 10 + n % 10) % 5 == 0;
}

int main() {
    int n;
    cin >> n;
    bool  m = YesOrNo(n);
    if (m) {cout << "Yes";}
    else {cout << "No";}
    return 0;
}