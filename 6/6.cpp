/*Бинарный поиск.Вводится число n,затем массив X из n целых чисел, в неубывающем порядке, xi⩽xi+1.
Затем вводится некоторое целое число y.Найдите индекс первого элемента xi,такого,что xi⩾y. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float* X;
	int i, n, y;

	cout << "Vvedite n" << endl;
	cin >> n;
	X = new float[n];
	cout << "Vvedite massiv X" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> X[i];
	}
	cout << "Vvedite y" << endl;
	cin >> y;

	for (i = 0; i < n; i++)
	{
		if (X[i] >= y)
		{
			cout << i;
			break;
		}
	}
}