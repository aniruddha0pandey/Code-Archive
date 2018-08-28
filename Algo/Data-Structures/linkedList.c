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
create() {
    linkedList* ptr;
    ptr = (linkedList*)malloc(sizeof(linkedList));
    if (linkedList != NULL) {
        linkedList->head = NULL;
        linkedList->tail = NULL;
    }
    return ptr;
}

void
destroy() {


}

assignList() {


}

bool
pushHead() {
    linkedList* avail;
    avail = create();

}

void*
popHead() {


}

bool
pushTail() {
    linkedList* avail;
    avail = create();

}

void*
popTail() {


}














#endif // _LINKEDLIST_C_
