#include <iostream>

typedef struct
node {
	int data;
	struct node* left;
	struct node* right;
}node;

node*
getNode (int newData) {
	node* newNode = new node;
	newNode -> data = newData;
	newNode -> left = newNode -> right = NULL;
	return newNode;
}

node*
insertNode (node* tmp, int newData) {
	if (tmp == NULL) return getNode(newData);
	if (tmp -> data > newData)
		tmp -> left = insertNode(tmp -> left, newData);
	else
		tmp -> right = insertNode(tmp -> right, newData);
	return tmp;
}

node*
deleteNode (node* tmp, int oldData) {
	if (tmp == NULL || tmp -> data == oldData) return tmp;
	if (tmp -> data > oldData)
		tmp -> left = deleteNode(tmp -> left, oldData);
	else
		tmp -> right = deleteNode(tmp -> right, oldData);
	// http://www.techiedelight.com/deletion-from-bst/
}

node*
searchNode (node* tmp, int newData) {
	if (tmp == NULL || tmp -> data == newData) return tmp;
	if (tmp -> data < newData) return searchNode(tmp -> right, newData);
	return searchNode(tmp -> left, newData);
}

void
preOrder (node* tmp) {
	if (tmp == NULL) return;
	std::cout << tmp -> data << " ";
	preOrder(tmp -> left);
	preOrder(tmp -> right);
}

int
main (void) {
	int N, data, Q;
	std::cin >> N >> data;
	node* root = getNode(data);
	while (--N) {
		std::cin >> data;
		insertNode(root, data);
	}
	std::cin >> Q;
	preOrder(searchNode(root, Q));
	return 0;
}

/*

SAMPLE INPUT

4
2 1 3 4
3

SAMPLE OUTPUT

3
4

*/
