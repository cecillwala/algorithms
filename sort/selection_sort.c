#include <stdio.h>

void selection_sort(int numbers[], int size);
int main() {
    int numbers[] = {7, 2, 5, 4, 1, 8, 0, 6, 3};
    int arrSize = 9;

    printf("Selection Sort: \n");
    selection_sort(numbers, arrSize);
}


void selection_sort(int numbers[], int size){
    //Loop over all the numbers
    for (int i = 0; i < size; i++){ 

        //Display current arrangement of the array
        for (int k = 0; k < size; k++){
            printf("%i ", numbers[k]);
        }
        printf("\n");

        int smaller = numbers[i];
        int smaller_index;

        //Find the smallest misplaced number
        for (int j = i + 1; j < size; j++){

            if (numbers[j] < smaller){
                smaller = numbers[j];
                smaller_index = j;
            }
        }

        //If there is a smaller misplaced number, swap numbers[i] and smaller
        if(smaller != numbers[i]){
            int temp = numbers[i];
            numbers[i] = numbers[smaller_index];
            numbers[smaller_index] = temp;
        }
    }
}