/*В заданном списке поменять местами каждый элемент,имеющий четный индекс,
состоящим сразу за ним элементом,имеющим нечетный индекс(нулевой с первым,второй с третьим и т.д.).
Вывести полученный массив на одной строке */

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

	for (i = 0; i < n - 1; i++)
		if (i % 2 == 0)
		{
			a = arr[i];
			b = arr[i + 1];
			arr[i] = b;
			arr[i + 1] = a;
		}
	
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
}