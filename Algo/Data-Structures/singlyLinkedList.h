#include <stdio.h>
#include <stdlib.h>

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

unsigned int length (linkedList* list) {
	node* current = list -> head;
	size_t count = 0;
	while (current != NULL) {
		++count;
		current = current -> next;
	}
	return count;
}

void
freeNode() {


}

assignList() {


}

bool
pushHead(linkedList* headNode, int newData) {
    if (headNode == NULL || data == NULL) return false;
    node* newNode;
    newNode = getNode();
    if (newNode == NULL) return false;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

bool
pushTail(linkedList* tailNode, int newData) {
    if (tailNode == NULL || data == NULL) return false;
    node* newNode;
    newNode = getNode();
    if (newNode == NULL) return false;
    newNode->data = newData;
    newNode->next = NULL;
    tail = newNode;
    if (newNode == NULL) {
        tailNode = newNode;
        return true;
    }
    while (tail->next != NULL) tail = tail->next;
    tailNode->next = newNode;
}

bool
pushAfter(linkedList* prevNode, int newData) {
    if (prevNode == NULL) return false;
    node* newNode;
    newNode = getNode();
    if (newNode == NULL) return false;
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void*
popHead() {


}

void*
popTail() {


}

int main (void) {
	linkedList* myList = listInit();
	printf("%d", length(myList));
	return 0;
}
