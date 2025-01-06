#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node* next;
}node;

node* new_node(node* list, int number);
void print(node* list);
int main(){
    node* list = NULL;
    for(int i = 1; i <= 5; i++){
        list = new_node(list, i * 10);
    }
    for(node* ptr = list; ptr != NULL; ptr = ptr->next){
        printf("%i ", ptr->number);
    }
    printf("\n");
}

node* new_node(node* list, int number){
    node* n = malloc(sizeof(node));
    n->number = number;
    if(list == NULL){
        n->next = NULL;
    }
    else{
        n->next = list;
    }
    return n;
}

void print(node* list){
    for(node* ptr = list; ptr->next != NULL; ptr = ptr->next){
        printf("%i ", ptr->number);
    }
    printf("\n");
}