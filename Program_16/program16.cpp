#include <iostream>
using namespace std;

class Employee
{
protected:
    int employeeId;
    string name;

public:
    Employee(int id, string n)
    {
        employeeId = id;
        name = n;
    }

    virtual void displayPaySlip() = 0;
};

class PermanentEmployee : public Employee
{
private:
    float basicSalary;
    float allowance;

public:
    PermanentEmployee(int id, string n, float basic, float allow)
        : Employee(id, n)
    {
        basicSalary = basic;
        allowance = allow;
    }

    void displayPaySlip() override
    {
        float totalSalary = basicSalary + allowance;

        cout << "\nPermanent Employee" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: Rs. " << basicSalary << endl;
        cout << "Allowance: Rs. " << allowance << endl;
        cout << "Total Salary: Rs. " << totalSalary << endl;
    }
};

class ContractEmployee : public Employee
{
private:
    float hoursWorked;
    float hourlyRate;

public:
    ContractEmployee(int id, string n, float hours, float rate)
        : Employee(id, n)
    {
        hoursWorked = hours;
        hourlyRate = rate;
    }

    void displayPaySlip() override
    {
        float totalSalary = hoursWorked * hourlyRate;

        cout << "\nContract Employee" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Hourly Rate: Rs. " << hourlyRate << endl;
        cout << "Total Salary: Rs. " << totalSalary << endl;
    }
};

int main()
{
    PermanentEmployee p(101, "Suraj", 30000, 5000);

    ContractEmployee c(102, "Rahul", 160, 200);

    p.displayPaySlip();
    c.displayPaySlip();

    return 0;
}