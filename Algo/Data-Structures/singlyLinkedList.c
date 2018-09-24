#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
	int data;
	struct node* next;
}node;

typedef struct linkedList {
	node* head;
	node* tail;
}linkedList;

linkedList* 
listInit() {
	printf("Intializing List...\n");
	linkedList* list = (void*) malloc(sizeof(linkedList));
	list -> head = NULL;
	list -> tail = NULL;
	return list;
}

node* 
getNode (int newData) {
	node* newNode = (void*) malloc(sizeof(node));
	newNode -> data = newData;
	return newNode;
}

unsigned int 
length (linkedList* list) {
	node* current = list -> head;
	size_t count = 0;
	while (current != NULL) {
		++count;
		current = current -> next;
	}
	return count;
}

bool
printList(linkedList* list) {
	if (length(list) <= 0)
		return false;
	node* current = list -> head;
	while (current != NULL) {
		printf("%d ", current -> data);
		current = current -> next;
	}
	return true;
}

bool 
pushHead (linkedList* list, int newData) {
	node* newNode = getNode(newData);
	if (newNode == NULL) return false;
	newNode -> next = list -> head;
	list -> head = newNode;
	///////// Updating Tail-Node /////////
	if (length(list) == 1)
		list -> tail = newNode;
	return true;
}

bool 
pushTail (linkedList* list, int newData) {
	node* newNode = getNode(newData);
	if (newNode == NULL) return false;
	newNode -> next = NULL;
	list -> tail = newNode;
	return true;
}

void
assignList() {


}

void*
popHead() {


}

void*
popTail() {


}

int main (void) {
	int i;

	linkedList* myList = listInit();

	printf("%d\n", length(myList));
	if (!printList(myList)) printf("Empty List!\n");

	for (i = 0; i < 10;) if (!pushHead(myList, ++i)) printf("Memory Overflow!\n");

	listLength = length(myList);
	printf("%d\n", length(myList));
	if (!printList(myList)) printf("EmptyList!\n");

	return 0;
}
