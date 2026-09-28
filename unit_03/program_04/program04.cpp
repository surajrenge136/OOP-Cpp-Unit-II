#include <iostream>
using namespace std;

class Counter {
    int value;

public:
    Counter(int v) {
        value = v;
    }

    Counter operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Prefix Increment: ";
    (++c).display();

    cout << "Postfix Increment: ";
    (c++).display();

    cout << "Current Value: ";
    c.display();

    return 0;
}