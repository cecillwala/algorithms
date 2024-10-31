#include <stdio.h>
#include <stdlib.h>

//Data structure for a doubly linked list
typedef struct node{
    int number;
    //Points to the previous node
    struct node *previous;
    //Points to the next node
    struct node *next;
}
node;

int main() {
    //Initialize the list with NULL
    node *list = NULL;
    
    for (int i = 1; i <= 5; i++)
    {
        //Create a new node
        node *n = malloc(sizeof(node));
        //Assign the number i to n->number
        n->number = i;
        //Set n->previous to the previous node's address
        n->previous = list;
        //Set next to NULL, bcoz at this point there's no next
        n->next = NULL;

        //if list is NULL, the list is empty therefore set n as the first element
        if (list == NULL)
        {
            list = n;
        }
        //else if list != NULL and its next pointer is NULL, set list->next to point to n
        //Indicating that n comes after list
        //Then set list to n 
        else if (list->next == NULL){
            list->next = n;
            list = n;
        }
        
    }

    //set ptr to point to the last node in the list
    //if ptr (list) != NULL, set it to the previous node BUT
    //print the current node's number first
    for (node *ptr = list; ptr != NULL; ptr = ptr->previous){
        printf("%i\n", ptr->number);
    }
}