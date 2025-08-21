#include "logic.h"

string print_array(int* array, int size) {
	string s = to_string(array[0]);

	for (int i = 1; i < size; i++) {
		s += " " + to_string(array[i]);
	}

	return s;
}

int count_sum(int* array, int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] != 0) {
			sum += array[i];
		}
	}

	return sum;
}

int count_not_zero_numbers(int* array, int size) {
	int counter = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] != 0) {
			counter++;
		}
	}

	return counter;
}

double count_arithmetic_mean(int* array, int size) {
	return (count_sum(array, size) / 1.0) / (count_not_zero_numbers(array, size) / 1.0);
}