#ifndef _LINKEDLIST_C_
#define _LINKEDLIST_C_

#include <stdio.h>
#include <stdbool.h> // C99

typedef struct node {
    int data;
    struct node* next;
 } node;

typedef struct linkedList {
    node* head;
    node* tail;
} linkedList, *ptr;

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
pushHead() {
    linkedList* avail;
    avail = createNode();

}

void*
popHead() {


}

bool
pushTail() {
    linkedList* avail;
    avail = createNode();

}

void*
popTail() {


}














#endif // _LINKEDLIST_C_
