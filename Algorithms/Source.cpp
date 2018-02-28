#include "Header.h"

int main() {
	srand(time(NULL));
	const int N = 10000000;
	vector<int> arr;
	arr.reserve(N);
	for (int i = 0; i < N; i++) {
		arr.push_back(rand());
	}

	size_t startTime = clock(); 

	//radixSort(arr);
	//countingSort(arr);
	quickSort(arr); 

	size_t endTIme = clock();

	cout << (isSorted(arr, true) ? "Array is sorted." : "Array is not sorted.") << endl;
	cout << "Time of the algorithm's execution = " << endTIme - startTime << " ms.";

	_getch();
	return 0;
}

