#include <iostream>
#include <algorithm>

// i.e arr[i - 1] is pivot
inline bool iHeadIndex(int arr[], int i) { return i > 0 && arr[i - 1] >= arr[i]; }

// i.e arr[j] new pivot
inline bool jHeadIndex(int arr[], int i, int j) { return arr[j] <= arr[i - 1]; }

char print(int arr[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << "|" << arr[i] << "|";
	return puts("");
}

bool permute(int arr[], int size) {
	// longest non-increasing suffix
	int i = size - 1;
	while (iHeadIndex(arr, i))
		i--;

	// las permutation check
	if (i <= 0)
		return false;

	// rightmost element greater than pivot
	int j = size - 1;
	while (jHeadIndex(arr, i, j))
		j--;

	// swapping
	std::swap(arr[i - 1], arr[j]);

	// reversing suffix
	std::reverse(arr + i, arr + size);
	
	return true;
}

int main () {
	int arr[] = {1, 2, 3};
	size_t size = sizeof(arr) / sizeof(int);

	do {
		print(arr, size);
	} while (permute(arr, size));

	permute(arr, size);
	return 0;
}
