#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <stdio.h>
#include <stdbool.h> // C99

typedef struct node {
    int data;
    struct node* next;
 } node;

typedef struct linkedList {
    node* head;
    node* tail;
} linkedList;

linkedList*
getNode() {
    linkedList* ptr;
    ptr = (linkedList*)malloc(sizeof(linkedList));
    if (linkedList != NULL) {
        linkedList->head = NULL;
        linkedList->tail = NULL;
    }
    return ptr;
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














#endif // _LINKEDLIST_H_
