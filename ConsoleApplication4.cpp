// ConsoleApplication4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <ctime>

using namespace std;
void max_element()
{
	int Min = 0; // ������������� ����������
	int width = 0; // ���-�� ��������
	int height = 0; // ���-�� �����
	int m = 0; // ������
	int n = 0; //������
	cout << "������� ����������� ������� ����� ������. ������ �������� - ���������� �����, ������ - ���������� ��������" << endl;
	cin >> height >> width; // ���������� �������� �������
	int **Matrix = new int*[height]; // �������� ������������� �������
	for (int count = 0; count < height; count++)
		Matrix[count] = new int[width];
	srand(time(NULL)); // ������������� ���������� ��������� ����� 
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			Matrix[i][j] = 0 + rand() % 10000; //���������� ������� ���������� �������
			cout << Matrix[i][j] << ' '; // ����� ��������� ������� �� �������
		}
		cout << endl;
	}
	Min = Matrix[0][0]; // ����������� �������� ������� �������� ������� ����������, � ������� ����� ��������� ����������� �������
	for (int i = 0; i < height; i++) // �������� ������ �� ������������ �������
	{
		for (int j = 0; j < width; j++)
		{
			if (Min > Matrix[i][j]) // ���� ����������� ������� ������ ������-�� �������� �������, �� �� ����������� ����������
									// �������� ����� �������� �������, ��� ��� ��� ����� �����������
			{
				Min = Matrix[i][j];
				m = i; // ���������� ���������� ����� ������������ �������� � ���������� m � n
				n = j;
			}
		}
	}
	cout << "����������� ������� = " << Min << endl; // ������� ����������� �������
	cout << "�������: " << m+1 << ' ' << n+1 << endl; // ������� �������
	for (int count = 0; count < height; count++) // �������� ������������� �������
		delete[]Matrix[count];
}

int main()
{
	setlocale(LC_ALL, "Russian"); // ��������� �������� �����
	max_element(); // ����� �������
	system("pause");
	return 0;
}

