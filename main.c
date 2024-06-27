#include <stdio.h>
#include <stdbool.h>
#include "array_list.h"
#include "single_linked_list.h"
#include "double_linked_list.h"
#include "array_stack.h"

int main(int argc, char** argv){
    // ArrayList* arr_list = arrlist_init();
    // arrlist_add(arr_list, 2);
    // for(int i = 0; i < 20; i++){
    //     arrlist_add(arr_list, i+1);
    // }
    // arrlist_to_string(arr_list);
    // for(int i = 0; i < 10; i++){
    //     arrlist_remove(arr_list, i);
    // }
    // arrlist_to_string(arr_list);
    // printf("\nHello World");

    // SingleLinkedList* sll = sll_init();
    // sll_add_first(sll,1);
    // printf("%d", sll->head->val);
    // for(int i = 0; i < 10; i++){
    //     sll_add_first(sll,i+1);
    // } 

    // // for(int i = 0; i < 9; i++){
    // //     sll_remove_first(sll);
    // // }

    // sll_to_string(sll);

    // DoubleLinkedList* dll = dll_init();

    // for(int i = 0; i < 10; i++){
    //     dll_add_last(dll,i+1);
    // }
    // dll_to_string(dll);

    ArrayStack* arr_stack = arrstack_init();
    printf("\n%s", arrstack_is_empty(arr_stack) ? "true" : "false");

    for(int i = 0; i < 10; i++){
        arrstack_push(arr_stack,i);
    }
    arrstack_to_string(arr_stack);
    
    for(int i = 0; i < 4; i++){
        arrstack_pop(arr_stack);
    }
    arrstack_to_string(arr_stack);
    printf("\n%s", arrstack_is_empty(arr_stack) ? "true" : "false");
    printf("\n%d", arrstack_peek(arr_stack));

    return 0;
}