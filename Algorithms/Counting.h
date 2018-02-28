#pragma once
#include <vector>
#include <iostream>

using namespace std;

template <class T>
void printl(T* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void countingSort(int* arr, int size) {
	int min = arr[0],
		max = arr[0];
	for (int i = 1; i < size; i++) {
		if (min >= arr[i])
			min = arr[i];
		else if (max <= arr[i])
			max = arr[i];
	}

	int range = max - min + 1;
	int* tempArr = new int[range];
	int* resultArr = new int[size];

	for (int i = 0; i < range; i++) {
		tempArr[i] = 0;
	}

	for (int i = 0; i < size; i++) {
		tempArr[arr[i] - min] += 1;
	}

	for (int i = 1; i < range; i++) {
		tempArr[i] += tempArr[i - 1];
	}

	for (int i = size - 1; i >= 0; i--) {
		resultArr[--tempArr[arr[i] - min]] = arr[i];
	}

	for (int i = 0; i < size; i++) {
		arr[i] = resultArr[i];
	}

	delete[]resultArr;
	delete[]tempArr;
}



void countingSort(std::vector<int> &arr) {
	countingSort(&arr[0], arr.size());
}