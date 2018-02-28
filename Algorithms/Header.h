#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <ctime>
#include "Insert.h"
#include "Selection.h"
#include "Bubble.h"
#include "Quick.h"
#include "Counting.h"
#include "Radix.h"

using namespace std;

template <class T>
void print(T* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <class T>
void print(vector<T> arr) {
	print(&arr[0], arr.size());
}

template <class T>
bool isSorted(T* arr, int size, bool ascending) {
	for (int i = 1; i < size; i++) {
		if (ascending && arr[i] < arr[i - 1] ||
			!ascending && arr[i] > arr[i - 1])
			return false;
	}
	return true;
}

template <class T>
bool isSorted(vector<T> arr, bool ascending) {
	return isSorted(&arr[0], arr.size(), ascending);
}

int compare(const void* left, const void* right) {
	const int l = *static_cast<const int*>(left);
	const int r = *static_cast<const int*>(right);
	return  l < r ? -1 : (l > r ? 1 : 0);
}