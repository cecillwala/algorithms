#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct node{
    int number;
    struct node *next;
} node;

int main() {
    node *list = NULL;

    for (int i = 1; i <= MAX; i++){
        node *n = malloc(sizeof(node));
        n->number = i;
        n->next = NULL;
        if(list == NULL)
        {
            list = n;
        }
        else{
            for (node *ptr = list; ptr != NULL; ptr = ptr->next){
                if(ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
            //If we are at the end of our list, set the last node's next pointer to the first node
            if(i == MAX){
                n->next = list;
            }
        }

        for (int i = 0; i < 5; i++)
        {
            for(node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                printf("%i ", ptr->number);
            }
            printf("\n");
        }
    }
}