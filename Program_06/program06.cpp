#include <iostream>
using namespace std;

class Academic
{
public:
    void showAcademic()
    {
        cout << "Academic: C++ Programming" << endl;
    }
};

class Sports
{
public:
    void showSports()
    {
        cout << "Sports: Cricket" << endl;
    }
};

class Student : public Academic, public Sports
{
public:
    string name;

    void displayStudent()
    {
        cout << "Student Name: " << name << endl;
    }
};

int main()
{
    Student s;

    s.name = "Suraj";

    s.displayStudent();
    s.showAcademic();
    s.showSports();

    return 0;
}
