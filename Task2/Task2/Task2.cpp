#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
double f(double x)
{
	return pow(x, 3) * exp(x) * cos(x);
}

double findRoot(double a, double b)
{
	while (fabs(f(b)) > pow(10, -5))
	{
		a = b - ((b - a) * f(b)) / (f(b) - f(a));
		b = a - ((a - b) * f(a)) / (f(a) - f(b));
	}
	return b;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "Корень уравнения x=" << findRoot(-5, -4) << endl;
	cout << "Корень уравнения x=" << findRoot(-2, -1.5) << endl;
	cout << "Корень уравнения x=" << findRoot(0, 1) << endl;
	system("pause");
}