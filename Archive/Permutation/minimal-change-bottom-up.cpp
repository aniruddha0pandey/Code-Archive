// https://github.com/aniruddha0pandey/Code_Archive/blob/master/Archive/String_Permutation.c
// https://www.theproductiveprogrammer.blog/GeneratingPermutations.java.php
// https://www.cs.uni.edu/~wallingf/teaching/cs3530/sessions/session15.html
// https://gist.github.com/krisys/946862#file-permutation-minimal_change-cpp

#include <iostream>

std::size_t size, limit;
int* tmp = NULL;

// print new set of permuted array
char print(int arr[]) {
	for (int i = 0; i < limit; i++) 
		std::cout << "|" << arr[i] << "|";
	return puts("");
}

void deallocate() {
	// free memory pointed to by tmp.
	delete[] tmp;

	// clear tmp to prevent using invalid memory reference.
	tmp = NULL;
}

void cpyArr(int arr[], std::size_t size) {
	tmp = new int[size + 1];
	for (int i = 0; i < size; i++) {
		tmp[i] = arr[i];
	}
}

void solve(int arr[], int save[], std::size_t size) {
	if (size == 1) {
		cpyArr(arr, size);
	} else {
		for (int i = 0; i < (size - 1); i++) {
			std::swap(tmp[i], arr[size - (i + 1)]);
			solve (arr, save, size - 1);
		}
	}

	if (size == limit)
		print(tmp);
}

int main(void) {
	int arr[] = {1, 2, 3, 4};
	limit = size = sizeof(arr) / sizeof(arr[0]);
	int save[size];
	solve(arr, save, size);
	deallocate();
	return 0;
}
