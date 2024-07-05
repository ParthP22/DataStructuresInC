#include "disjoint_set.h"

int djs_find_representative(DisjointSet* djs, int num){
    if(djs->representatives[num] == num){
        return num;
    }
    return djs->representatives[num] = djs_find_representative(djs, djs->representatives[num]);
}

bool djs_union(DisjointSet* djs, int rep1, int rep2){
    djs->representatives[djs_find_representative(djs, rep1)] = djs_find_representative(djs, rep2); 
}