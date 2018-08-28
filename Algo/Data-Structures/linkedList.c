#ifndef _LINKEDLIST_C_
#define _LINKEDLIST_C_

#include <stdio.h>
#include <stdbool.h> // C99

typedef struct node {
    int data;
    struct node* next;
 };

typedef struct linkedList {
    node* head;
    node* tail;
};

linkedList*
create() {
    linkedList* ptr;
    ptr = (linkedList*)malloc(sizeof(linkedList));
    if (linkedList != NULL) {
        linkedList-> head = NULL;
        linkedList-> tail = NULL;
        
    }
    return ptr;
}

assign() {


}

push() {


}

pop() {


}
















#endif // _LINKEDLIST_C_
