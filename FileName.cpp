#include <iostream>
using namespace std;

int main() {
	float x, y;

	cout << "Enter x:";
	cin >> x;

	if ((x >= -4) && (x <= -2)) {
		y = 2 * x + 2; cout << "f(" << x << ")=" << y << "\n";
	}

	if ((x >= -2) && (x < 0)) {
		y = -2; cout << "f(" << x << ")=" << y << "\n";
	}

	if (x == 0) {
		cout << "f(0)=[-2;0]";
	}

	if ((x > 0) && (x <= 3)) {
		y = 1.5 * x; cout << "f(" << x << ")=" << y << "\n";
	}

	if ((x >= 3) && (x <= 8)) {
		y = 2; cout << "f(" << x << ")=" << y << "\n";
	}

	if ((x >= 8) && (x <= 10)) {
		y = 2.5 * x - 18; cout << "f(" << x << ")=" << y << "\n";
	}


	return 0;

}