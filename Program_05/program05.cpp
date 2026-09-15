#include <iostream>
using namespace std;

class Vehicle
{
public:
    string brand;

    void displayVehicle()
    {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle
{
public:
    int seats;

    void displayCar()
    {
        cout << "Car Seats: " << seats << endl;
    }
};

class Bike : public Vehicle
{
public:
    int engineCC;

    void displayBike()
    {
        cout << "Bike Engine: " << engineCC << " CC" << endl;
    }
};

int main()
{
    Car c;
    c.brand = "Toyota";
    c.seats = 5;

    cout << "Car Details:" << endl;
    c.displayVehicle();
    c.displayCar();

    Bike b;
    b.brand = "Honda";
    b.engineCC = 160;

    cout << "\nBike Details:" << endl;
    b.displayVehicle();
    b.displayBike();

    return 0;
}