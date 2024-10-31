#include <stdio.h>

void draw(int height);
int main(){
    draw(5);
}

void draw(int height)
{ 
    if (height < 1){
        return;
    }

    draw(height - 1);

    for (int i = 0; i < height; i++)
    {
        printf("*");
    }
    printf("\n");

}