/*В массиве из n целых чисел, среди которых есть положительные и отрицательные,
заменить нулями те числа, величина которых по модулю больше максимального числа(|ai|> max{a1,a2, …,an}).
Напечатать полученный массив*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float* a;
	int i, n, max, j, x, y;

	cout << "Vvedite n" << endl;
	cin >> n;
	a = new float[n];
	cout << "Vvedite massiv a" << endl;
	for (i = 0; i < n; i++)
		cin >> a[i];

	max = a[n];
	for (i = 0; i < n - 1; i++)
		if (max < a[i])
			max = a[i];
	for (i = 0; i < n; i++)
	{
		if (abs(a[i]) > max)
			a[i] = 0;
		cout << a[i] << " ";
	}
}