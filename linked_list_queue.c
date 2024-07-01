#include "linked_list_queue.h"

LinkedListQueue* llqueue_init(){
    LinkedListQueue* ll_queue = (LinkedListQueue*)malloc(sizeof(LinkedListQueue));
    ll_queue->queue = dll_init();
    return ll_queue;
}
bool llqueue_offer(LinkedListQueue* ll_queue, int num){
    if(ll_queue == NULL){
        printf("\nLinkedListQueue is null");
        return false;
    }
    else{
        dll_add_first(ll_queue->queue, num);
        return true;
    }

}
int llqueue_poll(LinkedListQueue* ll_queue){
    if(ll_queue == NULL){
        printf("\nLinkedListQueue is null");
        return 1/0;
    }
    else if(ll_queue->queue->size == 0){
        printf("\nLinkedListQueue is empty");
        return 1/0;
    }
    else{
        return dll_remove_last(ll_queue->queue);
    }

}
int llqueue_peek(LinkedListQueue* ll_queue){
    if(ll_queue == NULL){
        printf("\nLinkedListQueue is null");
        return 1/0;
    }   
    else if(ll_queue->queue->size == 0){
        printf("\nLinkedListQueue is empty");
        return 1/0;
    }
    else{
        return dll_get_last(ll_queue->queue);
    }

}
bool llqueue_is_empty(LinkedListQueue* ll_queue){
    if(ll_queue == NULL){
        printf("\nLinkedListQueue is null");
        return true;
    }
    else if(ll_queue->queue->size == 0){
        printf("\nLinkedListQueue is empty");
        return true;
    }
    else{
        return false;
    }

}
void llqueue_to_string(LinkedListQueue* ll_queue){
    if(ll_queue == NULL){
        printf("\nLinkedListQueue is null");
        return;
    }
    else{
        dll_to_string(ll_queue->queue);
    }

}