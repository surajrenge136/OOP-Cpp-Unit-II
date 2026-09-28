#include <iostream>
using namespace std;

class Area {
public:
    int calculate(int side) {
        return side * side;
    }

    int calculate(int length, int breadth) {
        return length * breadth;
    }
};

int main() {
    Area a;

    cout << "Area of Square: " << a.calculate(5) << endl;
    cout << "Area of Rectangle: " << a.calculate(10, 5) << endl;

    return 0;
}