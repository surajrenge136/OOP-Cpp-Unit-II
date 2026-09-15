#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string vehicleNumber;
    string brand;
    float ratePerDay;

public:
    Vehicle(string number, string b, float rate)
    {
        vehicleNumber = number;
        brand = b;
        ratePerDay = rate;
    }

    virtual void displayDetails()
    {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Brand: " << brand << endl;
        cout << "Rate Per Day: Rs. " << ratePerDay << endl;
    }

    virtual float calculateRental(int days)
    {
        return ratePerDay * days;
    }
};

class Car : public Vehicle
{
private:
    int seats;

public:
    Car(string number, string b, float rate, int s)
        : Vehicle(number, b, rate)
    {
        seats = s;
    }

    void displayDetails() override
    {
        cout << "\nCar Details:" << endl;
        Vehicle::displayDetails();
        cout << "Seats: " << seats << endl;
    }
};

class Bike : public Vehicle
{
private:
    int engineCC;

public:
    Bike(string number, string b, float rate, int cc)
        : Vehicle(number, b, rate)
    {
        engineCC = cc;
    }

    void displayDetails() override
    {
        cout << "\nBike Details:" << endl;
        Vehicle::displayDetails();
        cout << "Engine: " << engineCC << " CC" << endl;
    }
};

int main()
{
    Car car("MH12AB1234", "Toyota", 1500, 5);
    Bike bike("MH12XY5678", "Honda", 700, 160);

    car.displayDetails();
    cout << "Rental for 3 days: Rs. "
         << car.calculateRental(3) << endl;

    bike.displayDetails();
    cout << "Rental for 3 days: Rs. "
         << bike.calculateRental(3) << endl;

    return 0;
}