#include <iostream>
#include <algorithm>

int size, limit;

inline bool even(int size) { return (size % 2 == 0); }

// print new set of permuted array
char print(int arr[]) {
	for (int i = 0; i < limit; i++)
		std::cout << "|" << arr[i] << "|";
	return puts("");
}

// swapping array elements
void permute(int arr[], int size, int i) {
	if (even(size))
		std::swap (arr[i], arr[size - 1]);
	else
		std::swap (arr[0], arr[size - 1]);
}

void solve(int arr[], int size) {
	if (size == 1)
		print(arr);
	
	for (int i = 0; i < size; i++) {
		solve(arr, size - 1);
		permute(arr, size, i);
	}
}

int main () {
	int arr[] = {1, 2, 3};
	limit = size = sizeof(arr) / sizeof(int);
	solve(arr, size);
	return 0;
}
