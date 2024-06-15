#include <stdio.h>
#include <stdbool.h>
#include "array_list.h"

int main(int argc, char** argv){
    ArrayList* arr_list = arrlist_init();
    arrlist_add(arr_list,0,8);
    to_string(arr_list);
    printf("\nHello World");
    return 0;
}