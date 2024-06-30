#ifndef ARRAY_QUEUE_
#define ARRAY_QUEUE_

#define DEFAULT_CAP 10

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "reallocate.h"
// #include "array_list.h"

typedef struct ArrayQueue ArrayQueue;

struct ArrayQueue{
    int* queue;
    int rear;
    int front;
    int size;
    int capacity;
};

ArrayQueue* arrqueue_init();
bool arrqueue_offer(ArrayQueue*,int);
int arrqueue_poll(ArrayQueue*);
int arrqueue_peek(ArrayQueue*);
bool arrqueue_is_empty(ArrayQueue*);
void arrqueue_to_string(ArrayQueue*);

#endif