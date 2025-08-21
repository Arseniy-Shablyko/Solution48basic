#include "logic.h"

string print_array(int* array, int size) {
	string s = to_string(array[0]);

	for (int i = 1; i < size; i++) {
		s += " " + to_string(array[i]);
	}

	return s;
}

int count_local_max(int* array, int size) {
	int counter = 0;

	if (array[0] > array[1]) {
		counter++;
	}

	if (array[size] > array[size - 1]) {
		counter++;
	}

	for (int i = 1; i < size - 1; i++) {
		if ((array[i] > array[i - 1]) && (array[i] > array[i + 1])) {
			counter++;
		}
	}

	return counter;
}

int count_local_min(int* array, int size){
	int counter = 0;

	if (array[0] < array[1]) {
		counter++;
	}

	if (array[size] < array[size - 1]) {
		counter++;
	}

	for (int i = 1; i < size - 1; i++) {
		if ((array[i] < array[i - 1]) && (array[i] < array[i + 1])) {
			counter++;
		}
	}

	return counter;
}