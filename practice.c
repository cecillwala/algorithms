#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
    struct node *previous;
} node;

int main() {
    node *list = NULL;

    for (int i = 1; i <= 5; i++)
    {
        node *n = malloc(sizeof(node));
        n->number = i;
        n->next = NULL;

        if (list == NULL){
            list = n;
        }
        else{
            for (node *ptr = list; ptr != NULL; ptr = ptr->next){
                if (ptr->next == NULL){
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    for (node *potr = list; potr != NULL; potr = potr->next){
        printf("%i\n", potr->number);
    }
}
