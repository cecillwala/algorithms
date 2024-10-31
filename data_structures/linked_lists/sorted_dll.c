#include <stdio.h>
#include <stdlib.h>

//doubly linked list data structure
typedef struct node{
    int number;
    //point to the next node
    struct node *next;
    //point to the prev node
    struct node *previous;
}node;

int main() {
    //initialize list
    node *list = NULL;

    for (int i = 1; i <= 5; i++){
        //create new node
        node *n = malloc(sizeof(node));
        //n->number set to i
        n->number = i;
        //set next node's address to NULL (for now)
        n->next = NULL;

        //If list is NULL, this's the first node therefore set list to n
        if(list == NULL){
            n->previous = NULL;
            list = n;
        }
        //if list already contains a node(s), do the following
        else{
            //Set ptr to point to list(1st node)
            //if list != NULL, set ptr to point to the next node, BUT do the following first
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                //if the next ptr is NULL, (we are at the end of our list)
                //set the current node's (n) previous pointer to point to ptr
                //set ptr->next to point to n and break the loop
                if (ptr->next == NULL){
                    n->previous = ptr;
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    for(node *pt = list; pt != NULL; pt = pt->next){
        printf("%i ", pt->number);
    }
    printf("\n");
}