#include "double_linked_list.h"


DoubleLinkedList* dll_init(){
    DoubleLinkedList* dll = (DoubleLinkedList*)malloc(sizeof(DoubleLinkedList));
    dll->head = NULL;
    dll->tail = NULL;
    dll->size = 0;
    return dll;
}

bool dll_add_first(DoubleLinkedList* dll, int num){
    if(dll == NULL){
        printf("\nDoubleLinkedList is null");
        return false;
    }
    else if(dll->head == NULL){
        dll->head = (DoubleListNode*)malloc(sizeof(DoubleListNode));
        dll->tail = dll->head;
        dll->head->val = num;
        dll->head->next = NULL;
        dll->size++;
        return true;
    }
    else{
        DoubleListNode* tmp = (DoubleListNode*)malloc(sizeof(DoubleListNode));
        tmp->next = dll->head;
        dll->head->prev = tmp;
        tmp->val = num;
        dll->head = tmp;
        dll->size++;
        return true;
    }
}

bool dll_add_last(DoubleLinkedList* dll, int num){
    if(dll == NULL){
        printf("\nDoubleLinkedList is null");
        return false;
    }
    else if(dll->tail == NULL){
        dll->tail = (DoubleListNode*)malloc(sizeof(DoubleListNode));
        dll->head = dll->tail;
        dll->tail->val = num;
        dll->tail->next = NULL;
        dll->size++;
        return true;
    }
    else{
        DoubleListNode* tmp = (DoubleListNode*)malloc(sizeof(DoubleListNode));
        tmp->prev = dll->tail;
        dll->tail->next = tmp;
        tmp->val = num;
        dll->tail = tmp;
        dll->size++;
        return true;
    }
}

int dll_remove_first(DoubleLinkedList* dll){
    if(dll == NULL){
        printf("\nDoubleLinkedList is null");
        return 1/0;
    }
    else if(dll->head == NULL){
        printf("\nDoubleLinkedList is empty");
        return 1/0;
    }
    else{
        DoubleListNode* tmp = dll->head;
        int removed = tmp->val;
        dll->head = dll->head->next;
        dll->head->prev = NULL;
        dll->size--;
        free(tmp);
        return true;
    }
}

int dll_remove_last(DoubleLinkedList* dll){
    if(dll == NULL){
        printf("\nDoubleLinkedList is null");
        return 1/0;
    }
    else if(dll->tail == NULL){
        printf("\nDoubleLinkedList is empty");
        return 1/0;
    }
    else{
        DoubleListNode* tmp = dll->tail;
        int removed = tmp->val;
        dll->tail = dll->tail->prev;
        dll->tail->next = NULL;
        dll->size--;
        free(tmp);
        return true;
    }
}

int dll_get_first(DoubleLinkedList* dll){
    if(dll == NULL){
        printf("\nDoubleLinkedList is null");
        return 1/0;
    }
    else if(dll->head == NULL){
        printf("\nDoubleLinkedList is empty");
        return 1/0;
    }
    else{
        return dll->head->val;
    }
}
int dll_get_last(DoubleLinkedList* dll){
    if(dll == NULL){
        printf("\nDoubleLinkedList is null");
        return 1/0;
    }
    else if(dll->tail == NULL){
        printf("\nDoubleLinkedList is empty");
        return 1/0;
    }
    else{
        return dll->tail->val;
    }
}

bool dll_is_empty(DoubleLinkedList* dll){
    if(dll == NULL){
        printf("\nDoubleLinkedList is null");
        return true;
    }
    else if(dll->head == NULL){
        return true;
    }
    else{
        return false;
    }
}


//If dir == true, then the dll is traversed forwards
//Else, it is traversed backwards
void dll_to_string(DoubleLinkedList* dll, bool dir){
    if(dll == NULL){
        printf("\nDoubleLinkedList is null");
    }
    if(dir){
        DoubleListNode* tmp = dll->head;
        printf("[");
        while(tmp->next != (DoubleListNode*)NULL){
            printf("%d, ", tmp->val);
            tmp = tmp->next;
        }
        printf("%d]", tmp->val);
    }
    else{
        DoubleListNode* tmp = dll->tail;
        printf("[");
        while(tmp->prev != (DoubleListNode*)NULL){
            printf("%d, ", tmp->val);
            tmp = tmp->prev;
        }
        printf("%d]", tmp->val);
    }
}

