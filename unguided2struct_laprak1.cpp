#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point s1 ;
    s1.x = 5;
    s1.y = 10;

    cout << "Titik koordinat s1: (" << s1.x << ", " << s1.y << ")" << endl;

    return 0;
}