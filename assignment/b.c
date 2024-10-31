#include <stdio.h>

void pyramid(int n);

int main(){
    int height = 5;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pyramid(int n){
    
}