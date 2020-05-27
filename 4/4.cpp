/*
Вводится число n,затем массив из n целочисленных элементов,затем вещественное число x.
Собрать в массиве все элементы,меньшие x,в его начало,а все элементы,больше или равные x,—вконец,
сохранив при этом порядок тех и других между собой.Дополнительных массивов не использовать.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float* arr;
	int n, i, x, a, j, m, z, k;

	cout << "Vvedite n" << endl;
	cin >> n;
	cout << "Vvedite x" << endl;
	cin >> x;
	arr = new float[n];
	k = 0;

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < n; i++)
	{
		if (arr[i - k] >= x)
		{
			for (j = i - k; j < n - 1; j++)
			{
				m = arr[j];
				z = arr[j + 1];
				arr[j] = z;
				arr[j + 1] = m;
			}
			k++;
		}
	}
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
}