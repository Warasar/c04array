/*Ввести с клавиатуры массив натуральных чисел.Подсчитать число четных и число нечетных
элементов в этом массиве (0 — тоже четное число),вывести эти два числа через пробел. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int* arr;
	int i, a, b, n;

	cout << "Vvedite n" << endl;
	cin >> n;
	arr = new int[n];
	cout << "Vvedite massiv arr" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	a = 0;
	b = 0;
	for (i = 0; i < n; i++)
		if (arr[i] % 2 == 0)
			a++;
		else b++;
	
	cout << "Kol-vo chetnux = " << a << ", kol-vo nechetnux = " << b;
}