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

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
private:
    int rollNo;

public:
    Student(string n, int r) : Person(n)
    {
        rollNo = r;
    }

    void displayStudent()
    {
        displayName();
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s("Suraj", 47);

    s.displayStudent();

    return 0;
}