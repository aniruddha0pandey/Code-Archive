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
		printf("ERROR       : Empty List!\n");
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

void*
popHead (linkedList* list) {
	if (length(list) <= 0) {
		printf("ERROR       : Empty List!\n");
		return;
	}
	node* tmp = list -> head;
	node* current = tmp -> next;
	free(tmp);
	list -> head = current;
	return tmp;
}

void*
popTail (linkedList* list) {
	if (length(list) <= 0) {
		printf("ERROR       : Empty List!\n");
		return;
	} if (length(list) == 1) {
		node* tmp = list -> head;
		free(tmp);
		list -> head = NULL;
		list -> tail = NULL;
		printf("Description : Empty List!\n");
		return;
	}
	node* tmp = list -> head;
	node* current = tmp;
	while (current -> next -> next != NULL) {
		current = current -> next;
	}
	free(current -> next);
	current -> next = NULL;
	list -> tail = current;
}

void
assignList (linkedList* list, int LB, int UB) {
	int i;
	for (i = UB; i > LB; )
		if (!pushHead(list, i--))
			printf("ERROR       : Memory Overflow!\n");
	for (i = UB; i > LB; )
			if (!pushTail(list, i--))
				printf("ERROR       : Memory Overflow!\n");
}

void
retractList (linkedList* list, int t_head, int t_tail) {
	int i;
	for (i = 0; i < t_head; i++)
		printf("Freed Node  : 0x%p\n", popHead(list));
	printf("--------------------------------\n");
	for (i = 0; i < t_tail; i++)
		printf("Freed Node  : 0x%p\n", popTail(list));
}

int main (void) {
	linkedList* myList = listInit();

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	assignList(myList, 0, 10);

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	retractList(myList, 2, 3);

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	return 0;
}
