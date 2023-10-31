//

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, x4;
	double coefficient1, coefficient2, coefficient3, coefficient4, coefficient5;
	double Matrix[4][5];
	cout << "enter odds" << endl;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			cin >> Matrix[i][j];
	coefficient1 = Matrix[0][0];
	coefficient2 = Matrix[0][1];
	coefficient3 = Matrix[0][2];
	coefficient4 = Matrix[0][3];
	coefficient5 = Matrix[0][4];
	double firstElement = Matrix[0][0];
	double secondElement1 = Matrix[1][0];
	double thirdElement1 = Matrix[2][0];
	double fourthElement1 = Matrix[3][0];
	for (int i = 0; i < 1; i++)
		for (int j = 0; j < 5; j++)
			Matrix[0][j] = Matrix[0][j] / firstElement;
	
	for (int i = 1; i < 2; i++)
		for (int j = 0; j < 5; j++)
			Matrix[1][j] = Matrix[1][j] - (Matrix[0][j] * secondElement1);
	
	for (int i = 2; i < 3; i++)
		for (int j = 0; j < 5; j++)
			Matrix[2][j] = Matrix[2][j] - (Matrix[0][j] * thirdElement1);
	
	for (int i = 3; i < 4; i++)
		for (int j = 0; j < 5; j++)
			Matrix[3][j] = Matrix[3][j] - (Matrix[0][j] * fourthElement1);
	
	double secondElement2 = Matrix[1][1];
	double thirdElement2 = Matrix[2][1];
	double fourthElement2 = Matrix[3][1];
	for (int i = 1; i < 2; i++)
		for (int j = 0; j < 5; j++)
			Matrix[1][j] = Matrix[1][j] / secondElement2;

	for (int i = 2; i < 3; i++)
		for (int j = 0; j < 5; j++)
			Matrix[2][j] = Matrix[2][j] - Matrix[1][j] * thirdElement2;

	for (int i = 3; i < 4; i++)
		for (int j = 0; j < 5; j++)
			Matrix[3][j] = Matrix[3][j] - Matrix[1][j] * fourthElement2;
	
	double thirdElement3 = Matrix[2][2];
	for (int i = 2; i < 3; i++)
		for (int j = 0; j < 5; j++)
			Matrix[2][j] = Matrix[2][j] / thirdElement3;
	
	double fourthElement3 = Matrix[3][2];
	for (int i = 3; i < 4; i++)
		for (int j = 0; j < 5; j++)
			Matrix[3][j] = Matrix[3][j] - Matrix[2][j] * fourthElement3;
	
	double fourthElement4 = Matrix[3][3];
	for (int i = 3; i < 4; i++)
		for (int j = 0; j < 5; j++)
			Matrix[3][j] = Matrix[3][j] / fourthElement4;

	/* for (int i = 0; i < 4; i++)
	{
		cout << endl;
		for (int j = 0; j < 5; j++)
			cout << Matrix[i][j] << " ";
	}
	*/
	x4 = Matrix[3][4];
	x3 = Matrix[2][4] - x4 * Matrix[2][3];
	x2 = Matrix[1][4] - x3 * Matrix[1][2] - x4 * Matrix[1][3];
	x1 = Matrix[0][4] - x2 * Matrix[0][1] - x3 * Matrix[0][2] - x4 * Matrix[0][3];		
	
	double s = coefficient1 * x1 + coefficient2 * x2 + coefficient3 * x3 + coefficient4 * x4;
	cout << s << endl << coefficient5 << endl;
	cout << "x1=" << x1 << " x2=" << x2 << " x3=" << x3 << " x4=" << x4 << endl;
	system("pause");
	return 0;
}

