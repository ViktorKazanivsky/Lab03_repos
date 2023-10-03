// Lab_03_1.cpp
// Казанівський Віктор
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 10

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
	double y; 
	double A; 
	double B; 
	cout << "x = "; cin >> x;

	A = 4.95 * pow(x, 2);

	if (x < -3.5) 
	B = 4 + pow(x, -2);

	if (x >= -3.5 && x < 1) 
	B = tan(3.5 + x) / 5;

	if (x >= 1) 
	B = sin(3 * x) - cos(x);

	y = A + B;

	cout << endl;
	cout << "y = " << y << endl;

	if (x < -3.5)
		B = 4 + pow(x, -2);
	else
		if (x >= 1)
			B = tan(3.5 + x) / 5;
		else
			B = sin(3 * x) - cos(x);

	y = A + B;

	cout << "2) y = " << y << endl;
	cin.get();

	return 0;
}
	
