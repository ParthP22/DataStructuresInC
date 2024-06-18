#include "single_linked_list.h"
#include <stdio.h>

SingleLinkedList* sll_init(){
    SingleLinkedList* sll = (SingleLinkedList*)malloc(sizeof(SingleLinkedList));
    sll->head = NULL;

    return sll;
}

bool sll_add_first(SingleLinkedList* sll, int num){
    if(sll == NULL){
        return false;
    }
    else if(sll->head == NULL){
        sll->head = (SingleListNode*)malloc(sizeof(SingleListNode));
        sll->head->next = NULL;
        sll->head->val = num;
        return true;
    }
    else{
        SingleListNode* tmp = (SingleListNode*)malloc(sizeof(SingleListNode));
        tmp->next = sll->head;
        tmp->val = num;
        sll->head = tmp;
        return true;
    }
}

bool sll_remove_first(SingleLinkedList* sll){
    if(sll == NULL){
        return false;
    }
    else if(sll->head == NULL){
        return false;
    }
    else{
        SingleListNode* tmp = sll->head;
        sll->head = sll->head->next;
        free(tmp);
        return true;
    }
}

bool sll_is_empty(SingleLinkedList* sll){
    if(sll == NULL){
        printf("\nYour SingleLinkedList is null");
        return true;
    }
    else if(sll->head == NULL){
        return true;
    }
    else{
        return false;
    }
}

void sll_to_string(SingleLinkedList* sll){
   SingleListNode* tmp = sll->head;
   printf("[");
    while(tmp != (SingleListNode*)NULL){
        printf("%d, ", tmp->val);
        tmp = tmp->next;
    }
    printf("]");
}

