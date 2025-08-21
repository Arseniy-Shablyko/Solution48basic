#include "logic.h"

string print_array(int* array, int size) {
	string s = to_string(array[0]);

	for (int i = 1; i < size; i++) {
		s += " " + to_string(array[i]);
	}

	return s;
}

int find_max_index(int* array, int size) {
	int max = 0;

	for (int i = 1; i < size; i++) {
		if (array[i] > array[max]) {
			max = i;
		}
	}

	return max;
}

int find_min_index(int* array, int size) {
	int min = 0;

	for (int i = 1; i < size; i++) {
		if (array[i] < array[min]) {
			min = i;
		}
	}

	return min;
}

int count_sum(int* array, int size) {
	int max = find_max_index(array, size);
	int min = find_min_index(array, size);

	int sum = 0;

	for (int i = 0; i < size; i++) {
		if ((array[i] != array[max]) && (array[i] != array[min])) {
			sum += array[i];
		}
	}

	return sum;
}

int count_not_max_and_min_elements(int* array, int size) {
	int max = find_max_index(array, size);
	int min = find_min_index(array, size);
	int counter = 0;

	for (int i = 0; i < size; i++) {
		if ((array[i] != array[max]) && (array[i] != array[min])) {
			counter++;
		}
	}

	return counter;
}

double count_arithmetic_mean(int* array, int size) {
	return (count_sum(array, size) / 1.0) / (count_not_max_and_min_elements(array, size) / 1.0);
}