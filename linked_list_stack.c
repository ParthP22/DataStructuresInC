#include "linked_list_stack.h"

LinkedListStack* llstack_init(){
    LinkedListStack* llstack = (LinkedListStack*)malloc(sizeof(LinkedListStack));
    llstack->stack = sll_init();
    return llstack;
}

bool llstack_push(LinkedListStack* ll_stack, int num){
    if(ll_stack == NULL){
        printf("\nYour LinkedListStack is null");
        return true;
    }
    else{
        return sll_add_first(ll_stack->stack, num);
    }
}

int llstack_pop(LinkedListStack* ll_stack){
    if(ll_stack == NULL){
        printf("\nYour LinkedListStack is null");
        return 1/0;
    }
    else if(ll_stack->stack->head == NULL){
        printf("\nYour LinkedListStack is empty");
        return 1/0;
    }
    else{
        return sll_remove_first(ll_stack->stack);
    }
}

int llstack_peek(LinkedListStack* ll_stack){
    if(ll_stack == NULL){
        printf("\nYour LinkedListStack is null");
        return 1/0;
    }
    else if(ll_stack->stack->head == NULL){
        printf("\nYour LinkedListStack is empty");
        return 1/0;
    }
    else{
        return sll_get_first(ll_stack->stack);
    }
}

bool llstack_is_empty(LinkedListStack* ll_stack){
    if(ll_stack == NULL){
        printf("\nYour LinkedListStack is null");
        return true;
    }
    else if(ll_stack->stack->head == NULL){
        return true;
    }
    else{
        return sll_is_empty(ll_stack->stack);
    }

}
void llstack_to_string(LinkedListStack* ll_stack){
    if(ll_stack == NULL){
        printf("\nYour LinkedListStack is null");
        return;
    }
    else{
        sll_to_string(ll_stack->stack);
    }

}