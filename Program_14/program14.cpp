#include <iostream>
using namespace std;

class University
{
public:
    string universityName;

    class Department
    {
    public:
        string departmentName;

        void displayDepartment()
        {
            cout << "Department: "
                 << departmentName << endl;
        }
    };

    void displayUniversity()
    {
        cout << "University: "
             << universityName << endl;
    }
};

int main()
{
    University u;

    u.universityName = "Zeal College of Engineering and Research";

    University::Department d;

    d.departmentName = "Artificial Intelligence and Data Science";

    u.displayUniversity();
    d.displayDepartment();

    return 0;
}