#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    Person(string n)
    {
        name = n;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person
{
protected:
    int rollNo;

public:
    Student(string n, int r) : Person(n)
    {
        rollNo = r;
    }

    void displayStudent()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

class Employee : virtual public Person
{
protected:
    int employeeId;

public:
    Employee(string n, int id) : Person(n)
    {
        employeeId = id;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
    }
};

class TeachingAssistant : public Student, public Employee
{
public:
    TeachingAssistant(string n, int r, int id)
        : Person(n), Student(n, r), Employee(n, id)
    {
    }

    void display()
    {
        displayPerson();
        displayStudent();
        displayEmployee();
    }
};

int main()
{
    TeachingAssistant ta("Suraj", 47, 101);

    ta.display();

    return 0;
}