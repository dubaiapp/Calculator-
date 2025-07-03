
#include <iostream>
using namespace std;

int main() {
    float length;
    cout << "Enter length in meters: ";
    cin >> length;

    int bricks = (length / 10.0) * 330;
    float cementBags = (length / 10.0) * 3;

    cout << "Estimated bricks needed: " << bricks << endl;
    cout << "Estimated cement bags needed: " << cementBags << endl;

    return 0;
}
