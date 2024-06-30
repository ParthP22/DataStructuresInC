#include "array_list.h"
#include "reallocate.h"


ArrayList* arrlist_init(){
    ArrayList* arr_list = (ArrayList*)malloc(sizeof(ArrayList));
    arr_list->arr = (int*)malloc(sizeof(int)*DEFAULT_CAP);
    arr_list->capacity = DEFAULT_CAP;
    arr_list->size = 0;
    return arr_list;
}

bool arrlist_add(ArrayList* arr_list, int num){
    if(arr_list == NULL){
        printf("\nYour ArrayList is null");
        return false;
    }
    else{
        arr_list->arr[arr_list->size] = num;
        arr_list->size++;
        if(arr_list->size == arr_list->capacity){
            arr_list->arr = reallocate(arr_list->arr,0,arr_list->size,&(arr_list->capacity));
            printf("Realloc...");
        }
        return true;
    }
}

bool arrlist_insert(ArrayList* arr_list, int index, int num){
    if(arr_list == NULL){
        printf("\nYour ArrayList is null");
        return false;
    }
    else if(index > arr_list->size || index < 0){
        printf("\nIndex is out of bounds for index: %d",index);
        return false;
    }
    else{
        for(int i = arr_list->size; i >= index; i--){
            arr_list->arr[i+1] = arr_list->arr[i];
        }
        arr_list->arr[index] = num;
        arr_list->size++;
        if(arr_list->size == arr_list->capacity){
            arr_list->arr = reallocate(arr_list->arr,0,arr_list->size,&(arr_list->capacity));
        }
        return true;
    }

}

int arrlist_remove(ArrayList* arr_list, int index){
    if(arr_list == NULL){
        printf("\nYour ArrayList is null");
        return index/0;
    }
    else if(index > arr_list->size - 1 || index < 0){
        printf("\nIndex is out of bounds for index: %d",index);
        return index/0;
    }
    else{
        int prev_elem = arr_list->arr[index];
        for(int i = index; i < arr_list->size - 1; i++){
            arr_list->arr[i] = arr_list->arr[i+1];
        }
        arr_list->arr[arr_list->size - 1] = 0;
        arr_list->size--;
        return prev_elem;
    }
}

int arrlist_get(ArrayList* arr_list, int index){
    if(arr_list == NULL){
        printf("\nYour ArrayList is null");
        return index/0;
    }
    else if(index >= arr_list->size || index < 0){
        printf("\nIndex is out of bounds for index: %d",index);
        return index/0;
    }
    else{
        return arr_list->arr[index];
    }
}

int arrlist_set(ArrayList* arr_list, int index, int num){
    if(arr_list == NULL){
        printf("\nYour ArrayList is null");
        return index/0;
    }
    else if(index > arr_list->size || index < 0){
        printf("\nIndex is out of bounds for index: %d",index);
        return index/0;
    }
    else{
        int prev_elem = arr_list->arr[index];
        arr_list->arr[index] = num;
        return prev_elem;
    }
}

int arrlist_size(ArrayList* arr_list){
    if(arr_list == NULL){
        printf("\nYour ArrayList is null");
        return 1/0;
    }
    else{
        return arr_list->size;
    }
}

bool arrlist_is_empty(ArrayList* arr_list){
    if(arr_list == NULL){
        printf("\nYour ArrayList is null");
        return true;
    }
    else if(arr_list->size == 0){
        return true;
    }
    else{
        return false;
    }
}

void arrlist_to_string(ArrayList* arr_list){
    printf("\n[");
    for(int i = 0; i < arr_list->size - 1; i++){
        printf("%d, ", arr_list->arr[i]);
    }
    printf("%d]", arr_list->arr[arr_list->size - 1]);
}