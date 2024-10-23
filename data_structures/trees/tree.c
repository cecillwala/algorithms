#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node *left;
    struct node *right;
}node;

void InOrderTraversal(node *root);
void PreOrderTraversal(node *root);
void PostOrderTraversal(node *root);

int main() {
    node *tree = NULL;

    for (int i = 1; i <= 5; i++){
        node *n = malloc(sizeof(node));
        n->number = i * 10;
        n->left = NULL;
        n->right = NULL;

        if (tree == NULL){
            tree = n;
        }
        else{
            for (node *ptr = tree; ptr != NULL; ptr = ptr->right){
                if (ptr->left == NULL)
                {
                    ptr->left = n;
                    break;
                }
                else if(ptr->right == NULL)
                {
                    ptr->right = n;
                    break;
                }
            }
        };
    }

    InOrderTraversal(tree);
    printf("\n");
    PreOrderTraversal(tree);
    printf("\n");
    PostOrderTraversal(tree);
    printf("\n");
}

void InOrderTraversal(node *root){
    if (root == NULL){
        return;
    }
    else{
        InOrderTraversal(root->left);
        printf("%i ", root->number);
        InOrderTraversal(root->right);
    }
}

void PreOrderTraversal(node *root){
    if (root == NULL){
        return;
    }

    printf("%i ", root->number);
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void PostOrderTraversal(node *root){
    if (root == NULL){
        return;
    }
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
    printf("%i ", root->number);
}