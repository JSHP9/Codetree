#include <iostream>
using namespace std;

void ReversePrintNum(int n) {
    for (int i = n; i > 0; --i)
        cout << i << " ";
    return;
}

void PrintNum(int n) {
    for (int i = 1; i <= n; ++i)
        cout << i << " ";
    cout << "\n";
    ReversePrintNum(n);
    return;

}

int main() {
    int n;
    cin >> n;
    PrintNum(n);
    return 0;
}