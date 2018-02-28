#pragma once
#include <vector>

template <class T>
void insertSort(T* arr, int size) {
	for (int i = 1; i < size; i++) {
		T key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j--];
		}
		arr[j + 1] = key;
	}
}

template <class T>
void insertSort(std::vector<T> &arr) {
	insertSort(&arr[0], arr.size());
}