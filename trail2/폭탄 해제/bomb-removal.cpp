#include <iostream>
#include <tuple>

using namespace std;

int main() {
    string cc;
    char co;
    int s;
    cin >> cc >> co >> s;
    tuple<string, char, int> c = make_tuple(cc, co, s);
    cout << "code : " << get<0>(c) << "\n";
    cout << "color : " << get<1>(c) << "\n";
    cout << "second : " << get<2>(c) << "\n";
    return 0;
}