# include <stdio.h>

void draw(int height);
int main()
{
    int height;
    printf("Height: ");
    scanf("%i", &height);


    draw(height);
}

void draw(int height)
{
    for(int i = 1; i <= height; i++)
    {
        printf("%i. ", i);
        for(int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}