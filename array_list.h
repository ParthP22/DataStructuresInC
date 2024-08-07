#ifndef ARRAY_LIST_
#define ARRAY_LIST_

#define DEFAULT_CAP 10

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "reallocate.h"

struct ArrayList{
    int capacity;
    int size;
    int* arr;
}typedef ArrayList;


ArrayList* arrlist_init(void);
bool arrlist_add(ArrayList*,int);
bool arrlist_insert(ArrayList*,int,int);
int arrlist_remove(ArrayList*,int);
int arrlist_get(ArrayList*,int);
int arrlist_set(ArrayList*,int,int);
int arrlist_size(ArrayList*);
bool arrlist_is_empty(ArrayList*);
void arrlist_to_string(ArrayList*);

#endif