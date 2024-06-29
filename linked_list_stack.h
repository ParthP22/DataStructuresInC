#ifndef LINKED_LIST_STACK_
#define LINKED_LIST_STACK_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "single_linked_list.h"

typedef struct LinkedListStack LinkedListStack;

struct LinkedListStack{
    SingleLinkedList* stack;
};

LinkedListStack* llstack_init();
bool llstack_push(LinkedListStack*, int);
int llstack_pop(LinkedListStack*);
int llstack_peek(LinkedListStack*);
bool llstack_is_empty(LinkedListStack*);
void llstack_to_string(LinkedListStack*);

#endif