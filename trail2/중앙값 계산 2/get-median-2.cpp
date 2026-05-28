#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];

        sort(arr, arr + i + 1);

        if ((i + 1) % 2 == 1) {
            cout << arr[i / 2] << " ";
        }
    }

    return 0;
}