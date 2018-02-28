#pragma once
#include <vector>

template <class T>
void selectionSort(T* arr, int size) {
	T temp; 
	int k;
	for (int i = 1; i < size; i++) {
		temp = arr[i - 1];
		k = i - 1;
		for (int j = i; j < size; j++) {
			if (arr[j] < temp) {
				temp = arr[j];
				k = j;
			}
		}
		arr[k] = arr[i - 1];
		arr[i - 1] = temp;
	}
}

template <class T>
void selectionSort(std::vector<T> &arr) {
	selectionSort(&arr[0], arr.size());
}