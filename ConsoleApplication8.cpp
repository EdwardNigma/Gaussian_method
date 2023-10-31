#include <iostream>
#include <cmath>
using namespace std;

double fact(double N)
{
	if (N < 0) 
		return 0; 
	if (N == 0) 
		return 1; 
	else 
		return N * fact(N - 1); 
}

float Taylor(double x, double eps, double &expon, double n)
{
	float part = 0;
	if (x == 0)
		return 1;
	else
	{
		part = pow(x, n) / fact(n);
		if (part > eps)
		{
			expon = expon + part;
			n++;
			Taylor(x, eps, expon, n);
		}
		else return expon;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	double eps = 0;
	double x = 0;
	double expon = 1;
	double n = 1;
	cout << "¬ведите действительное число х: ";
	cin >> x;
	cout << "¬ведите заданную точность: ";
	cin >> eps;
	Taylor(x, eps, expon, n);
	cout << expon << endl;
	system("pause");
	return 0;
}

