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

	int max = find_max_index(array, size);
	int min = find_min_index(array, size);
	cout << "Max = " << array[max] << endl;
	cout << "Min = " << array[min] << endl;



	double arithmetic_mean = count_arithmetic_mean(array, size);
	cout << "Arithmetic mean = " << arithmetic_mean;

	delete[] array;
	return 0;
}