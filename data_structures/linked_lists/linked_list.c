//C library containing printf function
#include <stdio.h>
//C library containing malloc function
#include <stdlib.h>

//Linked list data structure
typedef struct node{
    int number;
    //pointer to the next node in the linked list
    struct node *next;
}
node;


int main() {
    //Start of the list
    node *list = NULL;

    for( int i = 1; i <= 5; i++)
    {
        //Create new node
        node *n = malloc(sizeof(node));
        //Give the number i
        n->number = i;
        //Point to the "next" node (prev)
        n->next = NULL;
        //Store the current node's addess for the next node
        if(list == NULL){
            list = n;
        }
        else{
            for(node* ptr = list; ptr != NULL;ptr = ptr->next){
                if(ptr->next == NULL){
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    //Start with the last node. If, it is not empty point to the next node BUT before that, 
    //print the current node's number
    for(node *ptr = list; ptr != NULL; ptr = ptr->next){
        printf("%i ", ptr->number);
    }
    printf("\n");
}