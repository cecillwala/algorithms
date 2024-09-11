#include <stdio.h>

void draw(int n, int height);
int main(){
    draw(5, 1);
}

void draw(int n, int height)
{
    if(height > n)
    {
        return;
    }

    //print one more row
    for (int i = 0; i < height; i++)
    {
        printf("#");
    }
    printf("\n");

    draw(n, height + 1);
}