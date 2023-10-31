#include <iostream>
#include <cmath>

	

using namespace std;

double u(double y)
{
	return 0.7 - cos(y - 1);
}
double v(double y)
{
	return 1 - sin(y) / 2;
}
double firstDerivative(double y)
{
	return sin(y - 1);
}
double secondDerivative(double y)
{
	return -cos(y) / 2;
}



int main()
{
	setlocale(LC_ALL, "RUS");
	double eps = 0.0005;
	double max, x, y;
	double x0 = 0;
	double y0 = 0;
	x = v(y0);
	y = u(y0);
	double arr[4];
	cout << "Выразив х и у получаем следующие выражения для вычисления:" << endl;
	cout << "y = 0.7 - cos(y - 1);" << endl;
	cout << "x = 1 - sin(y) / 2;" << endl;
	arr[0] = firstDerivative(y0);
	arr[1] = 0;
	arr[2] = secondDerivative(y0);
	arr[3] = 0;
	max = arr[0];
	for (int i = 0; i < 4; i++)
		if (max < arr[i]) max = arr[i];
	if (max > 1) cout << "Метод расходится." << endl;
	else
	{
		while ((abs(x - x0) > eps) && (abs(y - y0) > eps))
		{
			y0 = y;
			x0 = x;
			y = u(y0);
			x = v(y0);
		}
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;

	}
	system("pause");
	return 0;
}
