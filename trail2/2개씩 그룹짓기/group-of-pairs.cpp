#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n*2];
    for (int i = 0; i < n*2; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n*2);
    int max = 0;
    for (int i = 0; i < n*2; ++i) {
        if (max < arr[i] + arr[n*2 - 1 - i])
            max = arr[i] + arr[n*2 - 1 - i];
    }
    cout << max;
    return 0;
}