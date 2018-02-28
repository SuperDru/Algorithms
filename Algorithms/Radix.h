#pragma once
#include <vector>

void radixSort(int* arr, int size) {
	int degree = 0;
	int *sortedArr = new int[size],
		*tempArr = new int[10];
	int max = arr[0];

	for (int i = 1; i < size; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	while (max > 0) {
		degree++;
		max /= 10;
	}

	int border = pow(10, degree);
	for (int d = 1; d <= border; d*=10) {
		for (int i = 0; i < 10; i++) 
			tempArr[i] = 0;

		for (int i = 0; i < size; i++) 
			tempArr[(arr[i] / d) % 10] += 1;

		for (int i = 1; i < 10; i++) 
			tempArr[i] += tempArr[i - 1];

		for (int i = size - 1; i >= 0; i--) 
			sortedArr[--tempArr[(arr[i] / d) % 10]] = arr[i];

		for (int i = 0; i < size; i++)
			arr[i] = sortedArr[i];
	}

	delete[]tempArr;
	delete[]sortedArr;
}

void radixSort(std::vector<int> &arr) {
	radixSort(&arr[0], arr.size());
}
