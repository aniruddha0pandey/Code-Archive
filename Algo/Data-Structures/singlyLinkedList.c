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

void
printList (linkedList* list) {
	if (length(list) <= 0) {
		printf("Description : Empty List!\n");
		return;
	}
	node* current = list -> head;
	printf("Description : ");
	while (current != NULL) {
		printf("%d ", current -> data);
		current = current -> next;
	}
	puts("");
}

bool 
pushHead (linkedList* list, int newData) {
	node* newNode = getNode(newData);
	if (newNode == NULL) return false;
	newNode -> next = list -> head;
	list -> head = newNode;
	//////////// Special-Case ////////////
	if (length(list) == 1)
		list -> tail = newNode;
	return true;
}

bool 
pushTail (linkedList* list, int newData) {
	node* newNode = getNode(newData);
	if (newNode == NULL) return false;
	newNode -> next = NULL;
	//////// Determining List Tail ///////
	node* tmp = list -> head;
	while (tmp != NULL) {
		list -> tail = tmp;
		tmp = tmp -> next;
	}
	/////////////////////////////////////
	node* current = list -> tail;
	current -> next = newNode;
	list -> tail = newNode;
	return true;
}

void
assignList (linkedList* list, int LB, int UB) {
	int i;
	for (i = UB; i > LB; )
		if (!pushHead(list, i--))
			printf("Memory Overflow!\n");
}

void*
popHead (linkedList* list) {
	if (length(list) <= 0) {
		printf("Empty List!\n");
		return;
	}
	node* current = list -> head;
	free(list -> head);
	list -> head = current -> next;
	return current;
}

void*
popTail () {


}

int main (void) {
	linkedList* myList = listInit();

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	assignList(myList, 0, 10);
	pushTail(myList, 5);

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	printf("Freed Node  : 0x%p\n", popHead(myList));
	printList(myList);

	return 0;
}

		printf("%d ", current -> data);
		current = current -> next;
	}
	puts("");
}

bool 
pushHead (linkedList* list, int newData) {
	node* newNode = getNode(newData);
	if (newNode == NULL) return false;
	newNode -> next = list -> head;
	list -> head = newNode;
	//////////// Special-Case ////////////
	if (length(list) == 1)
		list -> tail = newNode;
	return true;
}

bool 
pushTail (linkedList* list, int newData) {
	node* newNode = getNode(newData);
	if (newNode == NULL) return false;
	newNode -> next = NULL;
	//////// Determining List Tail ///////
	node* tmp = list -> head;
	while (tmp != NULL) {
		list -> tail = tmp;
		tmp = tmp -> next;
	}
	/////////////////////////////////////
	node* current = list -> tail;
	current -> next = newNode;
	list -> tail = newNode;
	return true;
}

void
assignList (linkedList* list, int LB, int UB) {
	int i;
	for (i = UB; i > LB; )
		if (!pushHead(list, i--))
			printf("Memory Overflow!\n");
}

void*
popHead (linkedList* list) {
	if (length(list) <= 0) {
		printf("Empty List!\n");
		return;
	}
	node* current = list -> head;
	freeNode(list -> head);
	list -> head = current -> next;
	current = NULL;
}

void*
popTail () {


}

int main (void) {
	linkedList* myList = listInit();

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	assignList(myList, 0, 10);
	pushTail(myList, 5);

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	printf("Free Node   : %d\n", popHead(myList));
	printList(myList);

	return 0;
}

		printf("%d ", current -> data);
		current = current -> next;
	}
	puts("");
}

bool 
pushHead (linkedList* list, int newData) {
	node* newNode = getNode(newData);
	if (newNode == NULL) return false;
	newNode -> next = list -> head;
	list -> head = newNode;
	//////////// Special-Case ////////////
	if (length(list) == 1)
		list -> tail = newNode;
	return true;
}

bool 
pushTail (linkedList* list, int newData) {
	node* newNode = getNode(newData);
	if (newNode == NULL) return false;
	newNode -> next = NULL;
	//////// Determining List Tail ///////
	node* tmp = list -> head;
	while (tmp != NULL) {
		list -> tail = tmp;
		tmp = tmp -> next;
	}
	/////////////////////////////////////
	node* current = list -> tail;
	current -> next = newNode;
	list -> tail = newNode;
	return true;
}

void
assignList (linkedList* list, int LB, int UB) {
	int i;
	for (i = UB; i > LB; )
		if (!pushHead(list, i--))
			printf("Memory Overflow!\n");
}

void*
popHead () {


}

void*
popTail () {


}

int main (void) {
	linkedList* myList = listInit();

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	assignList(myList, 0, 10);
	pushTail(myList, 5);

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	return 0;
}
