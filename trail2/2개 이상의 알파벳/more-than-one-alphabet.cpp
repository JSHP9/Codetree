#include <iostream>
#include <string>

using namespace std;

string A;

bool CheckString(string a) {
    for (int i = 0; i < a.length(); ++i) {
        if (a[0] != a[i])
            return true;
    }
    return false;
}

int main() {
    cin >> A;
    if (CheckString(A))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}