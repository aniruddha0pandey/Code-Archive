#include <iostream>
#include <algorithm>

bool right = true;
bool left = false;

// print new set of permuted array
char print(int arr[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << "|" << arr[i] << "|";
	return puts("");
}

int factorial(int size, int tmp = 1) {
	for (int i = 1; i <= size; i++)
		tmp *= i;
	return tmp;
}

// returns max mobile int from array
int maxElement(int arr[], bool dir[], int size, int tmp = 0, int mobile = 0) {
	for (int i = 0; i < size; i++) {
		if (dir[arr[i] - 1] == left && i != 0)
			if (arr[i] > arr[i - 1] && arr[i] > tmp)
				tmp = mobile = arr[i];

		if (dir[arr[i] - 1] == right && i != (size - 1))
			if (arr[i] > arr[i + 1] && arr[i] > tmp)
				tmp = mobile = arr[i];
	}

	// tmp and mobile both are zero
	if (!mobile && !tmp)
		return 0;
	else
		return mobile;
}

// returns position of max mobile int from array
int maxPosition(int arr[], int size, int mobile) {
	for (int i = 0; i < size; i++)
		if (arr[i] == mobile)
			return i + 1;
}

void swapping(int arr[], bool dir[], int pos) {
	if (dir[arr[pos - 1] - 1] == left)
		std::swap(arr[pos - 1], arr[pos - 2]);
	else if (dir[arr[pos - 1] - 1] == right)
		std::swap(arr[pos], arr[pos - 1]);
}

void changeDir(int arr[], bool dir[], int size, int mobileElement) {
	for (int i = 0; i < size; i++)
		if (arr[i] > mobileElement)
			if (dir[arr[i] - 1] == right)
				dir[arr[i] - 1] == left;
			else if (dir[arr[i] - 1] == left)
				dir[arr[i] - 1] == right;
}

void permute(int arr[], bool dir[], int size) {
	// element is said to be mobile
	// if it is larger than the element it is moving to
	int mobileElement = maxElement(arr, dir, size);
	int positionElement = maxPosition(arr, size, mobileElement);

	swapping(arr, dir, positionElement);
	changeDir(arr, dir, size, mobileElement);
	print(arr, size);

}

void solve(int arr[], int size) {
	bool dir[size] = {left};

	for (int i = 0; i < factorial(size); i++) {
		permute(arr, dir, size);
	}
}

int main () {
	int arr[] = {1, 2, 3, 4};
	int size = sizeof(arr) / sizeof(int);
	solve(arr, size);
	return 0;
}
