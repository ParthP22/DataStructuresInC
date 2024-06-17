#include <stdio.h>
#include <stdbool.h>
#include "array_list.h"

int main(int argc, char** argv){
    ArrayList* arr_list = arrlist_init();
    arrlist_add(arr_list, 2);
    for(int i = 0; i < 20; i++){
        arrlist_add(arr_list, i+1);
    }
    arrlist_to_string(arr_list);
    for(int i = 0; i < 10; i++){
        arrlist_remove(arr_list, i);
    }
    arrlist_to_string(arr_list);
    printf("\nHello World");
    return 0;
}