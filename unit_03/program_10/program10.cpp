#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class function" << endl;
    }
};

void display(Base& obj) {
    obj.show();
}

int main() {
    Derived d;

    display(d);

    return 0;
}