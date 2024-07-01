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
        printf("\nArrayQueue is null");
        return false;
    }
    else{
        arr_queue->queue[arr_queue->front % arr_queue->capacity] = num;
        arr_queue->front++;
        arr_queue->size++;
        if(arr_queue->size == arr_queue->capacity){
            arr_queue->queue = reallocate(arr_queue->queue,arr_queue->rear,arr_queue->front,&(arr_queue->capacity));
        }
        return true;
    }
}

int arrqueue_poll(ArrayQueue* arr_queue){
    if(arr_queue == NULL){
        printf("\nArrayQueue is null");
        return 1/0;
    }
    else if(arr_queue->size == 0){
        printf("\nArrayQueue is empty");
        return 1/0;
    }
    else{
        int removed = arr_queue->queue[arr_queue->rear % arr_queue->capacity];
        arr_queue->rear++;
        arr_queue->size--;
        return removed;
    }
}

int arrqueue_peek(ArrayQueue* arr_queue){
    if(arr_queue == NULL){
        printf("\nArrayQueue is null");
        return 1/0;
    }
    else if(arr_queue->size == 0){
        printf("\nArrayQueue is empty");
        return 1/0;
    }
    else{
        return arr_queue->queue[arr_queue->rear % arr_queue->capacity];
    }
}

bool arrqueue_is_empty(ArrayQueue* arr_queue){
    if(arr_queue == NULL){
        printf("\nArrayQueue is null");
        return true;
    }
    else if(arr_queue->size == 0){
        return true;
    }
    else{
        return false;
    }
}

void arrqueue_to_string(ArrayQueue* arr_queue){
    if(arr_queue == NULL){
        printf("\nArrayQueue is null");
        return;
    }
    else{
        printf("\n[");
        for(int i = arr_queue->rear; i < arr_queue->front - 1; i++){
            printf("%d, ", arr_queue->queue[i % arr_queue->capacity]);
        }
        printf("%d]", arr_queue->queue[arr_queue->front - 1]);
    }
}