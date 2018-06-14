#include <iostream>
#include <algorithm>

// i.e arr[i - 1] is pivot
inline bool iHeadIndex(int arr[], std::size_t i) { return i > 0 && arr[i - 1] >= arr[i]; }

// i.e arr[j] new pivot
inline bool jHeadIndex(int arr[], std::size_t i, std::size_t j) { return arr[j] <= arr[i - 1]; }

char print(int arr[], std::size_t size) {
	for (int i = 0; i < size; i++)
		std::cout << "|" << arr[i] << "|";
	return puts("");
}

bool permute(int arr[], std::size_t size) {
	// longest non-increasing suffix
	std::size_t i = size - 1;
	while (iHeadIndex(arr, i))
		i--;

	// las permutation check
	if (i <= 0)
		return false;

	// rightmost element greater than pivot
	std::size_t j = size - 1;
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
	std::size_t size = sizeof(arr) / sizeof(int);

	do {
		print(arr, size);
	} while (permute(arr, size));

	permute(arr, size);
	return 0;
}
