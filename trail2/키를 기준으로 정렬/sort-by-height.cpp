#include <iostream>
#include <algorithm>

using namespace std;

class Human {
public:
    string n, h, w;
    Human() {}
    Human(string name, string height, string weight) {
        this -> n = name;
        this -> h = height;
        this -> w = weight;
    }
};

bool cmp(Human a, Human b) {
    return a.h < b.h;
}

int main() {
    int n;
    cin >> n;
    string name, height, weight;
    Human h[n];
    for (int i = 0; i < n; ++i) {
        cin >> name >> height >> weight;
        h[i] = Human(name, height, weight);
    }
    sort(h, h + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << h[i].n << " " << h[i].h << " " << h[i].w << "\n";
    }
    return 0;
}