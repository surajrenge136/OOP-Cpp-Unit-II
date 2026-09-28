#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(double amount) = 0;
    virtual ~Payment() {}
};

class CreditCard : public Payment {
public:
    void pay(double amount) override {
        cout << "Paid Rs. " << amount << " using Credit Card" << endl;
    }
};

class UPI : public Payment {
public:
    void pay(double amount) override {
        cout << "Paid Rs. " << amount << " using UPI" << endl;
    }
};

int main() {
    Payment* p1 = new CreditCard();
    Payment* p2 = new UPI();

    p1->pay(1000);
    p2->pay(500);

    delete p1;
    delete p2;

    return 0;
}