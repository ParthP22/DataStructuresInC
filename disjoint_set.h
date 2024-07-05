#ifndef DISJOINT_SET_
#define DISJOINT_SET_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct DisjointSet DisjointSet;

struct DisjointSet{
    int* representatives;
};

DisjointSet* djs_init();
int djs_find_representative(DisjointSet*);
bool djs_union(DisjointSet*);

#endif