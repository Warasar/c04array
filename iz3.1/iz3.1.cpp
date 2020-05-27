/*Ввести с клавиатуры массив целых чисел.
Вывести максимальную длину цепочки подряд идущих нулевых элементов в нем. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int* arr;
	int i, n, max, a;

	cout << "Vvedite n" << endl;
	cin >> n;
	arr = new int[n];
	cout << "Vvedite massiv arr" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	max = 0;
	a = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == 0)
			a++;
		else 
		{
			if (a > max)
			{
				max = a;
				a = 0;
			}
		}
	}
	if (max < a)
		max = a;

	cout << "max dlina cepochki = " << max;
}
