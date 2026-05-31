#include <iostream>
#include <algorithm>

using namespace std;

class Human {
public:
    string n;
    int k, e, m;
    Human() {}
    Human(string name, int kor, int eng) {
        this -> n = name;
        this -> k = kor;
        this -> e = eng;
    }
};

bool cmp(Human a, Human b) {
    if (a.k == b.k) {
        return a.e > b.e;
    }

    return a.k < b.k;
}

int main() {
    int n;
    cin >> n;
    string name;
    int kor, eng;
    Human h[n];
    for (int i = 0; i < n; ++i) {
        cin >> name >> kor >> eng;
        h[i] = Human(name, kor, eng);
    }
    sort(h, h + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << h[i].n << " " << h[i].k << " " << h[i].e << "\n";
    }
    return 0;
}