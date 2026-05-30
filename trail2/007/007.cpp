#include <iostream>
using namespace std;

class Code {
public:
    string code;
    char location;
    int time;
    Code(string code, char location, int time) {
        this -> code = code;
        this -> location = location;
        this -> time = time;
    }
};

int main() {
    string sc;
    char a;
    int t;
    cin >> sc >> a >> t;
    Code c = Code(sc, a, t);
    cout << "secret code : " << c.code << "\n";
    cout << "meeting point : " << c.location << "\n";
    cout << "time : " << c.time;
    return 0;
}