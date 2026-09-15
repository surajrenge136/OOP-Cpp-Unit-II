#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person
{
public:
    int employeeId;

    void displayEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
    }
};

class Manager : public Employee
{
public:
    string department;

    void displayManager()
    {
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager m;

    m.name = "Suraj";
    m.employeeId = 101;
    m.department = "Artificial Intelligence";

    m.displayPerson();
    m.displayEmployee();
    m.displayManager();

    return 0;
}