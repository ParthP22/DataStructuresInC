#ifndef ARRAY_LIST_
#define ARRAY_LIST_

#define DEFAULT_CAP 10

#include <stdbool.h>
#include <stdlib.h>

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
bool is_arrlist_empty(ArrayList*);
void arrlist_to_string(ArrayList*);

#endif