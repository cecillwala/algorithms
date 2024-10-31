#include <stdio.h>
#include <stdlib.h>

//Structure for nodes in the tree
typedef struct node{
    int number;
    //pointer to the left child node
    struct node *left;
    //pointer to the right child node
    struct node *right;
}node;

//Prototypes for our traversal functions
void InOrderTraversal(node *root);
void PreOrderTraversal(node *root);
void PostOrderTraversal(node *root);

int main() {
    //Initializing our tree
    node *tree = NULL;

    //for loop to create five nodes
    for (int i = 1; i <= 5; i++){
        //create new node
        node *n = malloc(sizeof(node));

        //place a number and set its left and right children to NULL
        n->number = i * 10;
        n->left = NULL;
        n->right = NULL;

        //If there's no tree yet, set this node (n) as the root
        if (tree == NULL){
            tree = n;
        }
        //If there are already other nodes in the tree do the following
        else{
            //For loop to iterate over all nodes children
            //Create a temporary ptr to point to the root node, if the it is NOT NULL, perform whatever is inbetween the for loop's curly braces
            //then go to the right of the current node
            for (node *tmp = tree; tmp != NULL; tmp = tmp->right){
                //if the left child of the current pointer is empty, place the new node n there
                //And break the for loop
                if (tmp->left == NULL)
                {
                    tmp->left = n;
                    break;
                }
                //if the right child of the current pointer is empty, place the new node n there
                //And break the for loop
                else if(tmp->right == NULL)
                {
                    tmp->right = n;
                    break;
                }
            }
        };
    }

    //Traverse the tree using InOrder Traversal  
    printf("InOrder Traversal: ");
    InOrderTraversal(tree);
    printf("\n");

    //Traverse the tree using PreOrder Traversal
    printf("PreOrder Traversal: ");
    PreOrderTraversal(tree);
    printf("\n");

    //Traverse the tree using PostOrder Traversal
    printf("PostOrder Traversal: ");
    PostOrderTraversal(tree);
    printf("\n");
}

//void means the function does not return anything
//"node *root" means the function takes a pointer to a node as an argument
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
    else{
        printf("%i ", root->number);
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

void PostOrderTraversal(node *root){
    if (root == NULL){
        return;
    }
    else{
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        printf("%i ", root->number);
    }
}