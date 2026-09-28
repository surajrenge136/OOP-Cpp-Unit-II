#include <iostream>
using namespace std;

class Distance {
    int meter;

public:
    Distance(int m) {
        meter = m;
    }

    bool operator>(const Distance& d) {
        return meter > d.meter;
    }
};

int main() {
    Distance d1(50);
    Distance d2(30);

    if (d1 > d2)
        cout << "Distance 1 is greater";
    else
        cout << "Distance 2 is greater";

    return 0;
}