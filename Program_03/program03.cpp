#include <iostream>
using namespace std;

class Parent
{
public:
    int publicData = 10;

protected:
    int protectedData = 20;
};

class PublicChild : public Parent
{
public:
    void display()
    {
        cout << "Public Inheritance:" << endl;
        cout << "Public Data: " << publicData << endl;
        cout << "Protected Data: " << protectedData << endl;
    }
};

class PrivateChild : private Parent
{
public:
    void display()
    {
        cout << "\nPrivate Inheritance:" << endl;
        cout << "Public Data: " << publicData << endl;
        cout << "Protected Data: " << protectedData << endl;
    }
};

int main()
{
    PublicChild p;
    PrivateChild q;

    p.display();
    q.display();

    cout << "\nAccessing PublicChild public member: "
         << p.publicData << endl;

    return 0;
}