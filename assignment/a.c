#include <stdio.h>

int main(){
    int height = 5;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}