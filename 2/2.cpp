﻿/*Вводится число n, затем массив из n целочисленных элементов, среди которых
гарантированно есть отрицательный.Поменять местами в массиве первый отрицательный элемент с последним отрицательным.
Вывести полученный массив.В этой и последующих задачах на перестановку элементов
вы должны именно поменять местами указанные элементы в массиве,а не просто вывести напечать то,что требуется.*/


#include <iostream>

using namespace std;

int main() {
	int n, * arr, i = 0, a = 0, b = 0, j, c, d = 0;
	cin >> n;
	j = n - 1;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			d++;
		}
	}
	while (a == 0 && d > 1) {
		if (arr[i] < 0) {
			a = arr[i];
			i--;
		}
		i++;
	}
	while (b == 0 && d > 1) {
		if (arr[j] < 0) {
			b = arr[j];
			j++;
		}
		j--;
	}
	c = arr[i];
	arr[i] = arr[j];
	arr[j] = c;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}