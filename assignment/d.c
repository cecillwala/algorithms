#include <stdio.h>

int main(){
    int height = 5;

    for (int i = 0 ; i < height; i++){
        for (int j = i; j < height - 1; j++){
            printf(" ");
        }

        for (int k = 0; k < i + 1; k++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}