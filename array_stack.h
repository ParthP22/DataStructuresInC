#ifndef ARRAY_STACK_
#define ARRAY_STACK_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "array_list.h"


typedef struct ArrayStack ArrayStack;

struct ArrayStack{
    ArrayList* stack;
};

ArrayStack* arrstack_init();
bool arrstack_push(ArrayStack*, int);
int arrstack_pop(ArrayStack*);
int arrstack_peek(ArrayStack*);
bool arrstack_is_empty(ArrayStack*);
void arrstack_to_string(ArrayStack*);


#endif