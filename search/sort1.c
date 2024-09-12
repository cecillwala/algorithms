#include <stdio.h>

int main() {
    int numbers[] = {7, 2, 5, 4, 1, 0, 6, 3};

    //Loop over all the numbers
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++){ 

        //Display current arrangement of the array
        for (int k = 0; k < sizeof(numbers) / sizeof(int); k++){
            printf("%i ", numbers[k]);
        }
        printf("\n");

        int smaller = numbers[i];
        int smaller_index;

        //Find the smallest misplaced number
        for (int j = i + 1; j < sizeof(numbers) / sizeof(int); j++){

            if (smaller > numbers[j]){
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