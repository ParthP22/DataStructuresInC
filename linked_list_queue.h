#ifndef LINKED_LIST_QUEUE_
#define LINKED_LIST_QUEUE_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "double_linked_list.h"

typedef struct LinkedListQueue LinkedListQueue;

struct LinkedListQueue{
    DoubleLinkedList* queue;
};

LinkedListQueue* llqueue_init();
bool llqueue_offer(LinkedListQueue*, int);
int llqueue_poll(LinkedListQueue*);
int llqueue_peek(LinkedListQueue*);
bool llqueue_is_empty(LinkedListQueue*);
void llqueue_to_string(LinkedListQueue*);

#endif