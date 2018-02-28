#pragma once
#include <vector>

template <class T>
void bubbleSort(T* arr, int size) {
	int i, j;
	T temp;
	for (i = 0; i < size; i++) {
		for (j = size - 1; j > i; j--)
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
	}
}

template <class T>
void bubbleSort(std::vector<T> &arr) {
	bubbleSort(&arr[0], arr.size());
}