#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0;
    virtual void display() = 0;
    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
    double salary;

public:
    FullTimeEmployee(double s) {
        salary = s;
    }

    double calculateSalary() override {
        return salary;
    }

    void display() override {
        cout << "Full-Time Employee Salary: Rs. "
             << calculateSalary() << endl;
    }
};

class PartTimeEmployee : public Employee {
    double hours, rate;

public:
    PartTimeEmployee(double h, double r) {
        hours = h;
        rate = r;
    }

    double calculateSalary() override {
        return hours * rate;
    }

    void display() override {
        cout << "Part-Time Employee Salary: Rs. "
             << calculateSalary() << endl;
    }
};

int main() {
    Employee* employees[2];

    employees[0] = new FullTimeEmployee(30000);
    employees[1] = new PartTimeEmployee(80, 200);

    for (int i = 0; i < 2; i++) {
        employees[i]->display();
    }

    for (int i = 0; i < 2; i++) {
        delete employees[i];
    }

    return 0;
}