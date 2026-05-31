#include <iostream>
#include <algorithm>

using namespace std;

class Human {
public:
    int h, w, n;
    Human() {}
    Human(int height, int weight, int num) {
        this -> h = height;
        this -> w = weight;
        this -> n = num;
    }
};

bool cmp(Human a, Human b) {
    if (a.h == b.h) {
        if (a.w == b.w)
            return a.n < b.n;
        return a.w > b.w;
    }
    return a.h > b.h;

}

int main() {
    int n;
    cin >> n;
    int height, weight;
    Human h[n];
    for (int i = 0; i < n; ++i) {
        cin >> height >> weight;
        h[i] = Human(height, weight, i + 1);
    }
    sort(h, h + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << h[i].h << " " << h[i].w << " " << h[i].n << "\n";
    }
    return 0;
}