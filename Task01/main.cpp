#include <iostream>
#include "logic.h"

int main() {
	int size;
	cout << "Input array size: ";
	cin >> size;

	int* array = new int[size];
	int number;

	for (int i = 0; i < size; i++) {
		cin >> number;
		array[i] = number;
	}


	int sum = count_sum(array, size);
	cout << "Sum = " << sum;

	delete[] array;
	return 0;
}