#include "double_linked_list.h"


DoubleLinkedList* dll_init(){
    DoubleLinkedList* dll = (DoubleLinkedList*)malloc(sizeof(DoubleLinkedList));
    dll->head = NULL;
    dll->tail = NULL;
    return dll;
}

bool dll_add_first(DoubleLinkedList* dll, int num){
    if(dll == NULL){
        return false;
    }
    else if(dll->head == NULL){
        dll->head = (DoubleListNode*)malloc(sizeof(DoubleListNode));
        dll->tail = dll->head;
        dll->head->val = num;
        dll->head->next = NULL;
        return true;
    }
    else{
        DoubleListNode* tmp = (DoubleListNode*)malloc(sizeof(DoubleListNode));
        tmp->next = dll->head;
        dll->head->prev = tmp;
        tmp->val = num;
        dll->head = tmp;
        return true;
    }
}

bool dll_add_last(DoubleLinkedList* dll, int num){
    if(dll == NULL){
        return false;
    }
    else if(dll->tail == NULL){
        dll->tail = (DoubleListNode*)malloc(sizeof(DoubleListNode));
        dll->head = dll->tail;
        dll->tail->val = num;
        dll->tail->next = NULL;
        return true;
    }
    else{
        DoubleListNode* tmp = (DoubleListNode*)malloc(sizeof(DoubleListNode));
        tmp->prev = dll->tail;
        dll->tail->next = tmp;
        tmp->val = num;
        dll->tail = tmp;
        return true;
    }
}

int dll_remove_first(DoubleLinkedList* dll){
    if(dll == NULL){
        return 1/0;
    }
    else if(dll->head == NULL){
        return 1/0;
    }
    else{
        DoubleListNode* tmp = dll->head;
        int removed = tmp->val;
        dll->head = dll->head->next;
        dll->head->prev = NULL;
        free(tmp);
        return true;
    }
}

int dll_remove_last(DoubleLinkedList* dll){
    if(dll == NULL){
        return 1/0;
    }
    else if(dll->tail == NULL){
        return 1/0;
    }
    else{
        DoubleListNode* tmp = dll->tail;
        int removed = tmp->val;
        dll->tail = dll->tail->prev;
        dll->tail->next = NULL;
        free(tmp);
        return true;
    }
}

bool dll_is_empty(DoubleLinkedList* dll){
    if(dll == NULL){
        return true;
    }
    else if(dll->head == NULL){
        return true;
    }
    else{
        return false;
    }
}

void dll_to_string(DoubleLinkedList* dll){
    DoubleListNode* tmp = dll->head;
    printf("[");
    while(tmp->next != (DoubleListNode*)NULL){
        printf("%d, ", tmp->val);
        tmp = tmp->next;
    }
    printf("%d]", tmp->val);
}

