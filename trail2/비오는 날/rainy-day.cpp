#include <iostream>
#include <tuple>

using namespace std;

class Rain {
public:
    string d, we, w;
    Rain() {}
    Rain(string date, string week, string weather) {
        this -> d = date;
        this -> we = week;
        this -> w = weather;
    }
};

int main() {
    int n;
    string date, weather, week;
    cin >> n;
    Rain r[n];
    int min = -1;
    for (int i = 0; i < n; ++i) {
        cin >> date >> week >> weather;
        r[i] = Rain(date, week, weather);
        if (r[i].w == "Rain") {
            if (min == -1 || r[i].d < r[min].d)
                min = i;
        }
    }

    cout << r[min].d << " " << r[min].we << " " << r[min].w;
    return 0;
}