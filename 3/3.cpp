/*
Вводится число n, затем массив X из n вещественных чисел. Найдите первый из элементов массива,
наиболее отличающихся от среднего арифметического всех чисел X.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float* arr, * arr2, sr = 0.0, max;
	int n, a = 0;
	cin >> n;
	arr = new float[n];
	arr2 = new float[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sr += arr[i];
	}
	sr /= n;
	for (int i = 0; i < n; i++) {
		arr2[i] = abs(arr[i] - sr);
	}
	max = arr2[0];
	for (int i = 0; i < n; i++) {
		if (arr2[i] > max) {
			max = arr2[i];
			a = i;
		}
	}
	cout << arr[a] << endl;
}