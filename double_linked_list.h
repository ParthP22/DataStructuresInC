#ifndef DOUBLE_LINKED_LIST_
#define DOUBLE_LINKED_LIST_

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct DoubleLinkedList DoubleLinkedList;
typedef struct DoubleListNode DoubleListNode;

struct DoubleLinkedList{
    DoubleListNode* head;
    DoubleListNode* tail;
};

struct DoubleListNode{
    int val;
    DoubleListNode* next;
    DoubleListNode* prev;
};

DoubleLinkedList* dll_init();
bool dll_add_first(DoubleLinkedList*,int);
bool dll_add_last(DoubleLinkedList*,int);
int dll_remove_first(DoubleLinkedList*);
int dll_remove_last(DoubleLinkedList*);
bool dll_is_empty(DoubleLinkedList*);
void dll_to_string(DoubleLinkedList*);

#endif