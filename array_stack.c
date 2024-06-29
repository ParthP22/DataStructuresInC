#include "array_stack.h"

ArrayStack* arrstack_init(){
    ArrayStack* arr_stack = (ArrayStack*)malloc(sizeof(ArrayStack));
    arr_stack->stack = arrlist_init();
    return arr_stack;
}

bool arrstack_push(ArrayStack* arr_stack, int num){
    if(arr_stack->stack == NULL){
        printf("\nYour ArrayStack is null");
        return true;
    }
    else{
        return arrlist_add(arr_stack->stack, num);
    }
}
int arrstack_pop(ArrayStack* arr_stack){
    if(arr_stack->stack == NULL){
        printf("\nYour ArrayStack is null");
        return 1/0;
    }
    else if(arr_stack->stack->size == 0){
        printf("\nYour ArrayStack is empty");
        return 1/0;
    }
    else{
        return arrlist_remove(arr_stack->stack, arr_stack->stack->size - 1);
    }
    
}
int arrstack_peek(ArrayStack* arr_stack){
    if(arr_stack->stack == NULL){
        printf("\nYour ArrayStack is null");
        return 1/0;
    }
    else if(arr_stack->stack->size == 0){
        printf("\nYour ArrayStack is empty");
        return 1/0;
    }
    else{
        return arrlist_get(arr_stack->stack, arr_stack->stack->size - 1);
    }
}
bool arrstack_is_empty(ArrayStack* arr_stack){
    if(arr_stack->stack == NULL){
        printf("\nYour ArrayStack is null");
        return true;
    }
    else if(arr_stack->stack->size == 0){
        return true;
    }
    else{
        return arrlist_is_empty(arr_stack->stack);
    }
}

void arrstack_to_string(ArrayStack* arr_stack){
    if(arr_stack->stack == NULL){
        printf("\nYour ArrayStack is null");
        return;
    }
    else{
        arrlist_to_string(arr_stack->stack);
    }
}