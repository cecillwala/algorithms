#include <stdio.h>


int main(){
    int numbers[] = {56, 2, 5, 1, 3, 90, 7};
    int smaller;
    int temp;

    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        printf("%i, ", numbers[i]);
    }
    printf("\n");

    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        smaller = i;
        for(int j = i + 1; j < sizeof(numbers)/sizeof(int); j++){
            //find the smallest number and store its index here
            if(numbers[j] < numbers[smaller]){
                smaller = j;
            }
        }
        if(numbers[smaller] < numbers[i]){
            temp = numbers[i];
            numbers[i] = numbers[smaller];
            numbers[smaller] = temp;
        }
        for(int j = 0; j < sizeof(numbers)/sizeof(int); j++){
            printf("%i, ", numbers[j]);
        }
        printf("\n");
    }
}
