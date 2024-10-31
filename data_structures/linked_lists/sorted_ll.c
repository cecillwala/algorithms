#include <stdio.h>
#include <stdlib.h>

//Create a data structure for a linked list
typedef struct node{
    int number;
    struct node *next; 
}
node;

int main() {
    //points to NULL
    node *list = NULL;

    //Repeat 5 times
    for(int i = 1; i <= 5; i++)
    {
        //Create new node
        node *n = malloc(sizeof(node));

        //fill with i
        n->number = i;
        //next should be NULL because it's the last node in the list
        n->next = NULL;

        //If list is NULL then this means it is the first node therefore set list to point to n
        if (list == NULL){
            list = n;
        }
        else{
            //Traverse the whole list
            for(node *ptr = list; ptr != NULL; ptr = ptr->next)
            {   
                //If ptr->next is NULL, we are at the end of list. Append new node.
                //Break loop
                if (ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    //Make pt point to the first node(list)
    //if the first node is not NULL, print its number, then move to the next node
    for(node *pt = list; pt != NULL; pt = pt->next)
    {
        printf("%i ", pt->number);
    }
    printf("\n");
}
