#include <iostream>
#include <algorithm>

int size, limit;

char print(int arr[]) {
	for (int i = 0; i < limit; i++)
		std::cout << "|" << arr[i] << "|";
	return puts("");
}

void permute(int arr[], int size) {
	if (size == 1) {
		print(arr);
		return;
	}

	for (int i = 0; i < size; i++) {
		std::swap(arr[i], arr[size - 1]);
		permute(arr, size - 1);
		std::swap(arr[i], arr[size - 1]);
	}
}

int main () {
	int arr[] = {1, 2, 3};
	limit = size = sizeof(arr) / sizeof(int);
	permute(arr, size);
	return 0;
}
