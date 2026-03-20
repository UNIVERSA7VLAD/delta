#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;
double a, b, c, delta;

void calc(double a, double b, double c)
{
	delta = b * b - 4 * a * c;
	if (delta < 0) {
		cout << "delta < 0 because delta is " << delta << "\nfor a= " << a << " b= " << b << " c= " << c;
	}
	else if (delta == 0) {
		cout << "x= " << -b / (2.0 * a) << "\nfor a= " << a << " b= " << b << " c= " << c << " delta= " << delta;
	}
	else {
		cout << "x1= " << (-b + sqrt(delta)) / (2.0 * a) << "\nx2= " << (-b - sqrt(delta)) / (2.0 * a) << "\nfor a= " << a << " b= " << b << " c= " << c << " delta= " << delta;
	}
	cout << string(2, '\n');
}

int main()
{
	system("cls");
	while (cin >> a >> b >> c) {
		system("cls");
		calc(a, b, c);
	}
	return 0;
}