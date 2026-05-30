#include <iostream>
using namespace std;

class Student {
public:
    char g;
    int s;
    Student() {}
    Student(char grade, int score) {
        this -> g = grade;
        this -> s = score;
    }
};

int main() {
    char g;
    int s;
    Student students[5];
    int min = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> g >> s;
        students[i] = Student(g, s);
        if (i != 0) {
            min = (students[i].s > students[min].s) ? min : i;
        }

    }
    cout << students[min].g << " " << students[min].s;
    return 0;
}