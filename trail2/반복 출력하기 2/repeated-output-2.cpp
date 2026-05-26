#include <iostream>
using namespace std;

void PrintWorld(int n) {
    if (n == 0)
        return;

    cout << "HelloWorld" << "\n";
    n--;
    PrintWorld(n);
}

int main() {
    int n;
    cin >> n;
    PrintWorld(n);
    return 0;
}