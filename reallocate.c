#include "reallocate.h"

void reallocate(ArrayList* arr_list){
    int* new_arr = (int*)malloc(sizeof(int*) * arr_list->capacity * 2);
    for(int i = 0; i < arr_list->capacity; i++){
        new_arr[i] = arr_list->arr[i];
    }
    free(arr_list->arr);
    arr_list->arr = new_arr;
}