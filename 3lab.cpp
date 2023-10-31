#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;



int main()
{
	double eps = 0.001;
	double x0 = 0.5;
	double firstDerivative = 2 * exp(2 * x0) * x0 * (x0 + 1);
	double x1 = x0 - x0 * x0  *exp(2 * x0) / firstDerivative;
	double B = abs(1 / firstDerivative);
	double n = x0 * x0  * exp(2 * x0) / firstDerivative;
	double k = 2 * exp(2 * x1) * (2 * x1 * x1 + 4 * x1 + 1);
	double h = B * n * k;
	double a = n * (1 - sqrt(1 - 2 * h)) / h;
	cout << a << endl << endl;
	while (abs(x1 - x0) > eps)
	{
		x0 = x1;
		x1 = x0 - (x0 * x0  *exp(2 * x0) - 1) / (2 * exp(2 * x0) * x0 * (x0 + 1));
		cout << x1 << endl;
	}
	cout << "x = " << x1 << endl;
	system("pause");
	return 0;
}

