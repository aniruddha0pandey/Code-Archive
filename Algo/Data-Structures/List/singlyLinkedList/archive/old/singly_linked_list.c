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

//--- END DATA STRUCTURES ---//


//--- START UTILITY FUNCTIONS ---//

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

// unsigned int
// lenght (node* head, size_t count = 0) {
// 	if (head == NULL) return count;
// 	lenght (head -> next, count + 1);
// }

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

node*
popHead (linkedList* list) {
	if (length(list) <= 0) {
		printf("ERROR       : Empty List!\n");
		exit(0);
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
		exit(0);
	} else if (length(list) == 1) {
		node* tmp = list -> head;
		free(tmp);
		list -> head = NULL;
		list -> tail = NULL;
		printf("Description : Empty List!\n");
		exit(0);
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

void*
popRandom (linkedList* list, int findData) {
	node* tmp = list -> head;
	node* current = tmp;
	while ( current -> next -> next -> data == findData &&  ) {
		current = current -> next;
	}
	current = current -> next -> next;
	free(current -> next);
}

void
assignList (linkedList* list, int LB, int UB, int inc) {
	int i;
	if ( inc == 1 ) {
		for (i = UB; i > LB; )
			if (!pushHead(list, i--)) {
				printf("ERROR       : Memory Overflow!\n");
			}
	} else {
		for (i = UB; i > LB; )
				if (!pushTail(list, i--)) {
					printf("ERROR       : Memory Overflow!\n");		
				}
	}
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

void reverseList ( linkedList * list ) {
	node* previous = list -> head -> next;
	node* current = list -> head -> next -> next;
	node* tmp = list -> head -> next -> next -> next;
	int firstNodeData = previous -> data;
	previous = NULL;
	while ( current != NULL ) {
		previous = previous -> next;
		current = current -> next;
	}
}

void 
reverseHalfList ( linkedList* list ) {
	node* previous = head;
	node* current = head -> next;
	node* tmp;

	int len = length( linkedList* list );
	for ( int i; i < len/2; ) {
		tmp = current -> next;
		current -> next = previous;
		previous = current;
		current = tmp;
	}

}

int main (void) {
	linkedList* myList = listInit();

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	assignList(myList, 0, 10, 1);

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	// retractList(myList, 2, 3);
	popRandom(myList, 3);

	printf("Size of List: %d\n", length(myList));
	printList(myList);

	return 0;
}
