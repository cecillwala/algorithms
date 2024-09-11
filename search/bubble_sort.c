#include <stdio.h>

int main(){
    int numbers[] = {99, 1, 4, 5, 3, 31, 45, 9, 2, 5};
    int bigger;
    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        for(int j = i + 1; j < sizeof(numbers)/sizeof(int); j++){
            if(numbers[i] > numbers[j]){
                bigger = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = bigger;
            }
        }
    }
    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        printf("%i, ", numbers[i]);
    }
    printf("\n");
}