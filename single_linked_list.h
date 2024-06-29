#ifndef SINGLE_LINKED_LIST_
#define SINGLE_LINKED_LIST_

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct SingleListNode SingleListNode;
typedef struct SingleLinkedList SingleLinkedList;

struct SingleListNode{
    int val;
    SingleListNode* next;
};

struct SingleLinkedList{
    SingleListNode* head;
};

SingleLinkedList* sll_init();
bool sll_add_first(SingleLinkedList*,int);
int sll_remove_first(SingleLinkedList*);
int sll_get_first(SingleLinkedList*);
bool sll_is_empty(SingleLinkedList*);
void sll_to_string(SingleLinkedList*);


#endif