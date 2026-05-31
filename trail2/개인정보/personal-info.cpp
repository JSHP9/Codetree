#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Human {
public:
    string n;
    int h;
    double w;
};

bool cmpName(const Human& a, const Human& b) {
    return a.n < b.n;
}

bool cmpHeight(const Human& a, const Human& b) {
    return a.h > b.h;
}

int main() {
    Human h[5];

    for(int i = 0; i < 5; i++) {
        cin >> h[i].n >> h[i].h >> h[i].w;
    }

    cout << fixed << setprecision(1);

    sort(h, h + 5, cmpName);

    cout << "name\n";
    for(int i = 0; i < 5; i++) {
        cout << h[i].n << ' ' << h[i].h << ' ' << h[i].w << '\n';
    }

    cout << '\n';

    sort(h, h + 5, cmpHeight);

    cout << "height\n";
    for(int i = 0; i < 5; i++) {
        cout << h[i].n << ' ' << h[i].h << ' ' << h[i].w << '\n';
    }
}