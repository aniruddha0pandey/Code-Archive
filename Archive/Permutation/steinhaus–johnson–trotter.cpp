// incomplete
// https://www.geeksforgeeks.org/johnson-trotter-algorithm/

#include <iostream>
#include <algorithm>

char print(int arr[]) {
	for (int i = 0; i < 3; i++)
		std::cout << "|" << arr[i] << "|";
	return puts("");
}

int get_largest_moveable(int a[], int dirs[], int n) {
    int largest_moveable = -1;
    for(int i = 0;i < n;i++) {
        int moveto = i + dirs[i];

        if((moveto >= 0 && moveto < n) && (a[i] > a[moveto])) {
            if(largest_moveable == -1 || a[largest_moveable] < a[i]) {
                largest_moveable = i;
            }
        }
    }

    return largest_moveable;
}

void move(int a[], int dirs[], int moving) {
    int tmp;
    int moveto = moving + dirs[moving];

    tmp = a[moving];
    a[moving] = a[moveto];
    a[moveto] = tmp;

    tmp = dirs[moving];
    dirs[moving] = dirs[moveto];
    dirs[moveto] = tmp;
}

void sjt_algorithm(int a[], int n) {
	int moving;
    int dirs[3];
    for(int i = 0;i < 3;i++)
    	dirs[i] = -1; 

    while(moving = get_largest_moveable(a, dirs, n) != -1) {
        // reverse direction of all larger numbers
        for(int i = 0;i < 3;i++) {
            if(a[i] > a[moving])
            	dirs[i] = dirs[i] * -1;
        }
        // move the current largest
        move(a, dirs, moving);
        print(a);
    }
}

int main () {
	int arr[] = {1, 2, 3};
	sjt_algorithm(arr, 6);
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
#define AND &&

bool right = true;
bool left = false;

inline bool moveLeft(int arr[], int i, int tmp) { return arr[i] > arr[i - 1] AND arr[i] > tmp; }
inline bool moveRight(int arr[], int i, int tmp) { return arr[i] > arr[i + 1] AND arr[i] > tmp; }

inline bool dirLeft(int arr[], bool dir[], int i, int size) { return dir[arr[i] - 1] == left AND i != 0; }
inline bool dirRight(int arr[], bool dir[], int i, int size) { return dir[arr[i] - 1] == right AND i != (size - 1); }

inline bool left(int arr[], bool dir, int pos) { return dir[arr[pos - 1] - 1] == left; }
inline bool right(int arr[], bool dir, int pos) { return dir[arr[pos - 1] - 1] == right; }

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
		if (dirLeft(arr, dir, i, size) AND moveLeft(arr, i, tmp))
			tmp = mobile = arr[i];

		if (dirRight(arr, dir, i, size) AND moveRight(arr, i, tmp))
			tmp = mobile = arr[i];
	}

	// here tmp and mobile both are zero
	if (!mobile AND !tmp)
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
	if (left(arr, dir, pos))
		std::swap(arr[pos - 1], arr[pos - 2]);
	else if (right(arr, dir, pos))
		std::swap(arr[pos], arr[pos - 1]);
}

void changeDir(int arr[], bool dir[], int size, int mobileElement) {
	for (int i = 0; i < size; i++) {
		if (arr[i] > mobileElement) {
			if (dirRight(arr[], dir[], i, size + 1))
				dir[arr[i] - 1] == left;
			else if (dirLeft(arr[], dir[], i, size + 1))
				dir[arr[i] - 1] == right;
		}
	}
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
	int arr[] = {1, 2, 3};
	int size = sizeof(arr) / sizeof(int);
	solve(arr, size);
	return 0;
}
