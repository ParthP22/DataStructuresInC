#include "array_queue.h"

ArrayQueue* arrqueue_init(){
    ArrayQueue* arr_queue = (ArrayQueue*)malloc(sizeof(ArrayQueue));
    arr_queue->queue = (int*)malloc(sizeof(int)*DEFAULT_CAP);
    arr_queue->front = 0;
    arr_queue->rear = 0;
    arr_queue->capacity = DEFAULT_CAP;
    arr_queue->size = 0;
    return arr_queue;
}

bool arrqueue_offer(ArrayQueue* arr_queue, int num){
    if(arr_queue == NULL){
        return false;
    }
    else{
        arr_queue->queue[arr_queue->front % arr_queue->capacity] = num;
        arr_queue->front++;
        arr_queue->size++;
        if(arr_queue->size == arr_queue->capacity){
            reallocate(arr_queue->queue,arr_queue->rear,arr_queue->front,arr_queue->capacity);
        }
        return true;
    }
}

int arrqueue_poll(ArrayQueue* arr_queue){

}

int arrqueue_peek(ArrayQueue* arr_queue){

}

bool arrqueue_is_empty(ArrayQueue* arr_queue){

}

void arrqueue_to_string(ArrayQueue* arr_queue){

}