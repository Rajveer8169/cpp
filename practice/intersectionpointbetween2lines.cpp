#include <iostream>
using namespace std;

int main() {

    float a1, b1, c1;
    float a2, b2, c2;

    cout << "Enter a1 b1 c1 for line1: ";
    cin >> a1 >> b1 >> c1;

    cout << "Enter a2 b2 c2 for line2: ";
    cin >> a2 >> b2 >> c2;

    float D = a1*b2 - a2*b1;

    if(D == 0) {
        cout << "Lines are parallel. No intersection point.";
    }
    else {
        float x = (c1*b2 - c2*b1) / D;
        float y = (a1*c2 - a2*c1) / D;

        cout << "Intersection Point: (" << x << ", " << y << ")";
    }

    return 0;
}
