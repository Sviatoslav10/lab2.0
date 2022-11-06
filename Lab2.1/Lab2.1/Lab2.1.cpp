// Lab2.1.cpp
// < Куц Святослав >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b; // вхідний параметр
	double z1; // sin(α) + cos((2β - α))/cos(α) - sin((2β - α));
	double z2; // 1 + sin(2β)/cos(2β);

	cout << "This is TEST branch." << endl;
	cout << "Application start..." << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
	z2 = (1 + sin(2 * b)) / cos(2 * b);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cout << "Application end..." << endl;

	cout << "This is TEST remote changes." << endl;

	cin.get();
	return 0;
}
