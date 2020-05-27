/*
Вводится число n, затем массив A из n целых чисел, затем число 0 < m < n.
Переставьте первые m чисел и последние n−m чисел в массиве с сохранением порядка
внутри каждой из двух частей.Вывести полученный массив.Дополнительных массивов не использовать.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float* arr;
	int n, m, i, j, a, b, k;

	cout << "Vvedite n" << endl;
	cin >> n;
	arr = new float[n];
	cout << "Vvedite massiv" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Vvedite m" << endl;
	cin >> m;

	k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = i - k; j < n - 1; j++)
		{
			b = arr[j];
			a = arr[j + 1];
			arr[j] = a;
			arr[j + 1] = b;
		}
		k++;
	}
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
}
