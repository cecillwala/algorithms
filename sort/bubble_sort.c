#include <stdio.h>

void bubble_sort(int numbers[], int size);
int main(){
    //Unsorted array
    int numbers[] = {7, 2, 5, 4, 8, 8, 0, 6, 3};
    int arrSize = 9;

    printf("Bubble Sort: \n");
    bubble_sort(numbers, arrSize);
    
}


void bubble_sort(int numbers[], int size){
    //check for swaps
    int swap = 0;

    //go over array array.length times
    for(int i = 0; i < size; i++){

        //Always start comparing from the first element in the array
        int bigger = 0;

        //compare numbers[bigger] with the rest of the list excluding itself
        for(int j = bigger + 1; j < size; j++){
            for(int k = 0; k < size; k++){
                    printf("%i ", numbers[k]);
            }
            printf("\n");

            //if numbers[bigger] > numbers[bigger + 1], swap their positions
            if (numbers[bigger] > numbers[j]){
                int temp = numbers[j];
                numbers[j] = numbers[bigger];
                numbers[bigger] = temp;
                bigger = j;
            }
            //if numbers[bigger] < numbers[bigger + 1], move to numbers[bigger + 1] and compare it to numbers[bigger + 2]
            else{
                bigger = j;
            }
        }
    }
}