#include "array_list.h"
#include <stdio.h>

ArrayList* arrlist_init(){
    ArrayList* arr_list = malloc(sizeof(ArrayList*));
    arr_list->arr = malloc(sizeof(int*)*DEFAULT_CAP);
    arr_list->capacity = DEFAULT_CAP;
    arr_list->size = 0;
    return arr_list;
}

bool arrlist_add(ArrayList* arr_list, int index, int num){
    if(arr_list == NULL){
        printf("\nYour ArrayList is null");
        return false;
    }
    else if(index > arr_list->size || index < 0){
        printf("\nindex is out of bounds");
        return false;
    }
    else{
        for(int i = arr_list->size; i >= index; i--){
            arr_list->arr[i+1] = arr_list->arr[i];
        }
        arr_list->arr[index] = num;
        arr_list->size++;
        return true;
    }

}

int arrlist_remove(ArrayList* arr_list, int index){
    
}

int arrlist_get(ArrayList* arr_list, int index){

}

bool arrlist_set(ArrayList* arr_list, int index, int num){

}

void to_string(ArrayList* arr_list){
    printf("\n[");
    for(int i = 0; i < arr_list->size; i++){
        printf("%d, ", arr_list->arr[i]);
    }
    printf("]");
}