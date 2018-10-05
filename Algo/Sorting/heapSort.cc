// Binary-Search Tree : Data of all the nodes in the left sub-tree of the root node should be ≤ the data of the root.
//                      The data of all the nodes in the right sub-tree of the root node should be > the data of the root.
// Binary-Heap   Tree : Data of the root node is > or < the data of two children node.

#include <iostream>

// bottom-up approach
void heapify (int arr[], int i) {
	int l = (i << 1) + 1;
	int r = (i << 1) + 2;
}

void buildHeap (int arr) {
	int n = *(&arr + 1) - arr;
	for (int i = (n >> 1) - 1; i >= 0; --i)
		heapify(arr, i);
}

void heapSort (int arr[], int i) {
	buildHeap(arr);
}

int main (void) {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	heapSort(arr);
	return 0;
}

