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

	int local_max = count_local_max(array, size);
	int local_min = count_local_min(array, size);

	cout << "Local max number = " << local_max << endl;
	cout << "Local min number = " << local_min << endl;

	delete[] array;
	return 0;
}