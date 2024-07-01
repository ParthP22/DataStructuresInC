#include "single_linked_list.h"


SingleLinkedList* sll_init(){
    SingleLinkedList* sll = (SingleLinkedList*)malloc(sizeof(SingleLinkedList));
    sll->head = NULL;
    sll->size = 0;
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
        sll->size++;
        return true;
    }
    else{
        SingleListNode* tmp = (SingleListNode*)malloc(sizeof(SingleListNode));
        tmp->next = sll->head;
        tmp->val = num;
        sll->head = tmp;
        sll->size++;
        return true;
    }
}

int sll_remove_first(SingleLinkedList* sll){
    if(sll == NULL){
        return 1/0;
    }
    else if(sll->head == NULL){
        return 1/0;
    }
    else{
        SingleListNode* tmp = sll->head;
        int removed = tmp->val;
        sll->head = sll->head->next;
        sll->size--;
        free(tmp);
        return true;
    }
}

int sll_get_first(SingleLinkedList* sll){
    if(sll == NULL){
        return 1/0;
    }
    else if(sll->head == NULL){
        return 1/0;
    }
    else{
        return sll->head->val;
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
   printf("\n[");
    while(tmp->next != (SingleListNode*)NULL){
        printf("%d, ", tmp->val);
        tmp = tmp->next;
    }
    printf("%d]", tmp->val);
}

