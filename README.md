Squad: Slabous Dmytro, Obez Hlib, Tkach Artem, Palyha Nazar
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float x, y;
	cout << "Enter x ";
	
	if (!(cin >> x)) {
		cout << "Error: Please enter a numeric value!" << endl;
		return 1; 
	}
    if (x >= 0.0 && x <= 1.0) {
		y = 0.5;
	}
	else if (x > 1.0 && x <= 1.5) {
		y = x - 0.5;
	}
	else if (x > 1.5 && x <= 2.5) {
		y = 2.5 - x;
	}
	/*else if (!(x >= 0 && x <= 2.5)) {
		cout << "X is outside possible values";
	}*/
	else {
		cout << "X is outside possible values";
		return 2;
	}

		
	cout << "Y=" << y;

   
    return 0;
}
