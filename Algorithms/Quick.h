#pragma once
#include <vector>

template <typename T>
void quickSort(T* mas, int size) {
	int i = 0, j = size - 1;
	T temp, p = mas[j >> 1]; 
	do {
		while (mas[j] > p) j--;
		while (mas[i] < p) i++;
		if (i <= j) {
			temp = mas[j];
			mas[j] = mas[i];
			mas[i] = temp;
			i++; j--;
		}
	} while (i <= j);

	if (j > 0) quickSort(mas, j + 1);
	if (size - 1 > i) quickSort(mas + i, size - i);
}

template <typename T>
void quickSort(std::vector<T> &arr) {
	quickSort(&arr[0], arr.size());
}