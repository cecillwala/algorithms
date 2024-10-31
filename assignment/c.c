#include <stdio.h>

int main(){
    int height = 5;
    for (int i = 0; i < height; i++)
    {
        for (int k = i; k < height - 1; k++){
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}