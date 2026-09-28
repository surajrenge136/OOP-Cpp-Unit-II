#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number operator-() {
        return Number(-value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n(10);

    cout << "Original: ";
    n.display();

    Number result = -n;

    cout << "After Unary Minus: ";
    result.display();

    return 0;
}