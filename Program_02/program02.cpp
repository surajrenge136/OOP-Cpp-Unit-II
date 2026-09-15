#include <iostream>
using namespace std;

class Employee
{
protected:
    float salary;

public:
    Employee()
    {
        salary = 30000;
    }
};

class Developer : public Employee
{
public:
    void displaySalary()
    {
        cout << "Developer Salary: Rs. " << salary << endl;
    }
};

int main()
{
    Developer d;

    d.displaySalary();

    return 0;
}