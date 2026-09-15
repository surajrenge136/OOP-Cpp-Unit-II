#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void move()
    {
        cout << "Vehicle is moving" << endl;
    }
};

class Car : public Vehicle
{
public:
    void move() override
    {
        cout << "Car is moving on the road" << endl;
    }
};

class Boat : public Vehicle
{
public:
    void move() override
    {
        cout << "Boat is moving on the water" << endl;
    }
};

int main()
{
    Vehicle* v;

    Car c;
    Boat b;

    v = &c;
    v->move();

    v = &b;
    v->move();

    return 0;
}