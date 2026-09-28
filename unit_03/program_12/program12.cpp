#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* shapes[2];

    shapes[0] = new Circle();
    shapes[1] = new Rectangle();

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];
    }

    return 0;
}