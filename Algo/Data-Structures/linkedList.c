#ifndef _LINKEDLIST_C_
#define _LINKEDLIST_C_

#include <stdio.h>
#include <stdbool.h> // C99

typedef struct node {
    int data;
    struct node* next;
 } node, *ptrNode;

typedef struct linkedList {
    node* head;
    node* tail;
} linkedList, *ptrLinkedList;

linkedList*
createNode() {
    linkedList* ptr;
    ptr = (linkedList*)malloc(sizeof(linkedList));
    if (linkedList != NULL) {
        linkedList->head = NULL;
        linkedList->tail = NULL;
    }
    return ptr;
}

void
destroyNode() {


}

assignList() {


}

bool
pushHead(linkedList* headNode, int data) {
    if (headNode == NULL || data == NULL) return false;
    node* newNode;
    newNode = createNode();
    if (newNode == NULL) return false;
    newNode->data = data;
    newNode->next = headNode->head;
    headNode->head = newNode;
}

void*
popHead() {


}

bool
pushTail(linkedList* tailNode, int data) {
    if (tailNode == NULL || data == NULL) return false;
    node* newNode;
    newNode = createNode();
    if (newNode == NULL) return false;
    newNode->data = data;
    newNode->next = NULL;
    tailNode->tail = newNode;
    while (tailNode->tail != NULL)
        tailNode = tailNode->tail
}

void*
popTail() {


}














#endif // _LINKEDLIST_C_
