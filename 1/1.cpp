/*Вводится число n, затем массив A из n целочисленных элементов.
Подсчитайте, сколько в массиве элементов, больших последнего.*/

#include <iostream>
using namespace std;

int main() {
	int n, m, j = 0, * A;
	cin >> n;
	A = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	m = A[n - 1];
	for (int i = 0; i < n - 1; i++) {
		if (A[i] > m) {
			j++;
		}
	}
	cout << j << endl;
}