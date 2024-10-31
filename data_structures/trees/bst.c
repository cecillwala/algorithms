#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//Node structure
typedef struct node{
    int number;
    struct node *left;
    struct node *right;
}node;

void currentNode(node *root, int level);
node* CreateBST(int arr[], int len);
void PreOrderTraversal(node *root);
int height(node *root);

int main(){
    int array[11] = {50, 40, 60, 20, 42, 55, 65, 10, 62, 73, 30};
    node *tree = CreateBST(array, 11);

    printf("Breadth First Search: \n");
    for(int i = 1; i <= height(tree); i++){
        printf("Level %i: ", i);
        currentNode(tree, i);
        printf("\n");
    } 
}

    

node* CreateBST(int arr[], int len){
    node *tree = NULL;
    for(int i = 0; i < len; i++){
        node *n = malloc(sizeof(node));
        n->number = arr[i];
        n->left = NULL;
        n->right = NULL;
        if(tree == NULL){
            tree = n;
        }
        else{
            node *next = NULL;
            for(node *tmp = tree; tmp != NULL; tmp = next){
                if(arr[i] > tmp->number){
                    if(tmp->right == NULL){
                        tmp->right = n;
                        break;
                    }
                    else{
                        next = tmp->right;
                    }
                }
                else if(arr[i] < tmp->number){
                    if(tmp->left == NULL){
                        tmp->left = n;
                        break;
                    }
                    else{
                        next = tmp->left;
                    }
                }
            }
        }
    }
    return tree;
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