#include <stdio.h>
#include <stdbool.h>
#include "array_list.h"
#include "single_linked_list.h"
#include "double_linked_list.h"
#include "array_stack.h"
#include "linked_list_stack.h"
#include "array_queue.h"
#include "linked_list_queue.h"
#include "array_heap.h"
#include "disjoint_set.h"

int main(int argc, char** argv){
    // ArrayList* arr_list = arrlist_init();
    // arrlist_add(arr_list, 2);
    // for(int i = 0; i < 1000; i++){
    //     arrlist_add(arr_list, i+1);
    // }
    // arrlist_to_string(arr_list);
    // for(int i = 0; i < 10; i++){
    //     arrlist_remove(arr_list, 0);
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

    // LinkedListStack* ll_stack = llstack_init();
    // printf("\n%s", llstack_is_empty(ll_stack) ? "true" : "false");

    // for(int i = 0; i < 10; i++){
    //     llstack_push(ll_stack,i);
    // }
    // llstack_to_string(ll_stack);
    
    // for(int i = 0; i < 4; i++){
    //     llstack_pop(ll_stack);
    // }
    // llstack_to_string(ll_stack);
    // printf("\n%s", llstack_is_empty(ll_stack) ? "true" : "false");
    // printf("\n%d", llstack_peek(ll_stack));

    // ArrayQueue* arr_queue = arrqueue_init();
    // printf("\n%s", arrqueue_is_empty(arr_queue) ? "true" : "false");

    // for(int i = 0; i < 1000; i++){
    //     arrqueue_offer(arr_queue,i);
    // }

    // for(int i = 0; i < 100; i++){
    //     arrqueue_poll(arr_queue);
    // }

    // for(int i = 200; i < 300; i++){
    //     arrqueue_offer(arr_queue,i);
    // }

    // arrqueue_to_string(arr_queue);
    // printf("\n%d", arrqueue_peek(arr_queue));
    // printf("\n%s", arrqueue_is_empty(arr_queue) ? "true" : "false");

    // LinkedListQueue* ll_queue = llqueue_init();
    // printf("\n%s", llqueue_is_empty(ll_queue) ? "true" : "false");

    // for(int i = 0; i < 1000; i++){
    //     llqueue_offer(ll_queue,i);
    // }

    // for(int i = 0; i < 100; i++){
    //     llqueue_poll(ll_queue);
    // }

    // for(int i = 200; i < 300; i++){
    //     llqueue_offer(ll_queue,i);
    // }

    // llqueue_to_string(ll_queue);
    // printf("\n%d", llqueue_peek(ll_queue));
    // printf("\n%s", llqueue_is_empty(ll_queue) ? "true" : "false");

    // ArrayHeap* arr_heap = arrheap_init();

    // for(int i = 7; i < 10; i++){
    //     arrheap_insert(arr_heap,i);
    // }
    // for(int i = 2; i <= 5; i++){
    //     arrheap_insert(arr_heap,i * 2);
    // }

    
    // arrheap_insert(arr_heap,1);
    // arrheap_to_string(arr_heap);

    // arrheap_heap_sort(arr_heap);
    // printf("\nHeapSorted: ");
    // arrheap_to_string(arr_heap);

    // arrheap_remove(arr_heap,6);
    // arrheap_to_string(arr_heap);

    // arrheap_remove(arr_heap,5);
    // arrheap_to_string(arr_heap);

    DisjointSet* djs = djs_init(5);
    djs_union(djs, 0, 1);
    djs_union(djs, 2, 3);
    djs_union(djs, 1, 3);

    for(int i = 0; i < 5; i++){
        printf("\nElement %d belongs to the set with representative %d", i, djs_find_representative(djs, i));
    }

    return 0;
}