// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <ctime>

using namespace std;
void max_element()
{
	int Min = 0; // инициализация переменной
	int width = 0; // кол-во столбцов
	int height = 0; // кол-во строк
	int m = 0; // индекс
	int n = 0; //индекс
	cout << "Введите размерность матрицы через пробел. Первое значение - количество строк, второе - количество столбцов" << endl;
	cin >> height >> width; // считывание размеров матрицы
	int **Matrix = new int*[height]; // создание динамического массива
	for (int count = 0; count < height; count++)
		Matrix[count] = new int[width];
	srand(time(NULL)); // инициализация генератора случайных чисел 
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			Matrix[i][j] = 0 + rand() % 10000; //заполнение массива рандомными числами
			cout << Matrix[i][j] << ' '; // вывод элементов массива на консоль
		}
		cout << endl;
	}
	Min = Matrix[0][0]; // присваиваем значение первого элемента матрицы переменной, в которой будет храниться минимальный элемент
	for (int i = 0; i < height; i++) // начинаем бегать по заполненному массиву
	{
		for (int j = 0; j < width; j++)
		{
			if (Min > Matrix[i][j]) // если минимальный элемент больше какого-то элемента массива, то мы присваиваем переменной
									// значение этого элемента массива, так как нам нужен минимальный
			{
				Min = Matrix[i][j];
				m = i; // записываем координаты этого минимального элемента в переменные m и n
				n = j;
			}
		}
	}
	cout << "Минимальный элемент = " << Min << endl; // выводим минимальный элемент
	cout << "Индексы: " << m+1 << ' ' << n+1 << endl; // выводим индексы
	for (int count = 0; count < height; count++) // удаление динамического массива
		delete[]Matrix[count];
}

int main()
{
	setlocale(LC_ALL, "Russian"); // поддержка русского языка
	max_element(); // вызов функции
	system("pause");
	return 0;
}

