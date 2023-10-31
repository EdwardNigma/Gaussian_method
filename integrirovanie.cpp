#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N = 100;
	double upperBound = 1.3;
	double lowerBound = -0.5;
	double H = (upperBound - lowerBound) / N;
	double sum = 0;
	int i = 0;
	double M = abs((2 * 1.3 * 1.3 - 1) / pow(sqrt(1.3 * 1.3 + 1), 5));
	double R = M * H * H * (upperBound - lowerBound) / 24;
	while (i < N)
	{
		sum = sum + H * 1 / (sqrt((lowerBound + H / 2)*(lowerBound + H / 2) + 1));
		lowerBound = lowerBound + H;
		i++;
	}
	cout << sum << endl;
	cout << "R = " << R << endl;
	system("pause");
	return 0;
}

