#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159265359;

int main()
{
    double a, z1, z2;
    int i;

    a = 0;

    cout << "z1 = (sin(2a)+sin(5a)-sin(3a))/(cos(a)-cos(3a)+cos(5a)\n\n" << "Entering a for z1 in radians or degrees? (enter 1 or 2): ";
    cin >> i;
    cout << "Input a for z1 ";
    if (i == 1) {
        cout << "(in radians): ";
        cin >> a;
        a = a / 1.0;
    }
    else if (i == 2) {
        cout << "(in degrees): ";
        cin >> a;
        a = a * pi / 180.0;
    }


    if ((cos(a) - cos(3 * a) + cos(5 * a) < 1e-7) && (cos(a) - cos(3 * a) + cos(5 * a) > -1e-7)) {
        cout << "z1 for this a in undefined (you cannot divide by zero!)\n\n";
    }
    else {
        z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) - cos(3 * a) + cos(5 * a));
        cout << "z1 = " << z1 << endl << endl;
    }

    cout << "z2 = tg(3a)\n\n" << "Entering a for z2 in radians or degrees? (enter 1 or 2): ";
    cin >> i;
    
    cout << "Input a for z2 ";
    if (i == 1) {
        cout << "(in radians): ";
        cin >> a;
        a = a / 1.0;
    }
    else if (i == 2) {
        cout << "(in degrees): ";
        cin >> a;
        a = a * pi / 180.0;
    }

    z2 = tan(3*a);
    
    if ((z2 <= 1000) && (z2 >= -1000)) cout << "z2 = " << z2 << endl;
    else cout << "z2 does not exist\n";
}
