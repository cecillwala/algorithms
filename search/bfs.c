#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node *left;
    struct node *right;
}node;

int height(node *root);
void currentNode(node *root, int level);

int main(){
    node *tree = NULL;

    for(int i = 1; i <= 10; i++){
        node *n = malloc(sizeof(node));
        n->number = i * 10;
        n->left = NULL;
        n->right = NULL;

        if(tree == NULL){
            tree = n;
        }
        else{
            for(node *tmp = tree; tmp != NULL; tmp = tmp->right){
                if(tmp->left == NULL){
                    tmp->left = n;
                    break;
                }
                else if(tmp->right == NULL){
                    tmp->right = n;
                    break;
                }
            }
        }
    }

    for(int i = 1; i <= height(tree); i++){
        printf("Level %i: ", i);
        currentNode(tree, i);
        printf("\n");
    }

}

int height(node *root){
    if(root == NULL){
        return 0;
    }
    else{
        int lheight = height(root->left);
        int rheight = height(root->right);

        if(lheight > rheight){
            return lheight + 1;
        }
        else{
            return rheight + 1;
        }
    }
}

void currentNode(node *root, int level){
    if(root == NULL){
        return;
    }
    else{
        if(level == 1){
            printf("%i ", root->number);
        }
        else{
            currentNode(root->left, level - 1);
            currentNode(root->right, level - 1);
        }
    }

}