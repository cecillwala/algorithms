#include <stdio.h>

int main(){
    //Unsorted array
    int numbers[] = {7, 2, 5, 4, 1, 0, 6, 3};

    //check for swaps
    int swap = 0;

    //go over array array.length times
    for(int i = 0; i < sizeof(numbers) / sizeof(int); i++){

        //Always start comparing from the first element in the array
        int bigger = 0;

        //compare numbers[bigger] with the rest of the list excluding itself
        for(int j = bigger + 1; j < sizeof(numbers) / sizeof(int); j++){

            //print current array order
            for(int k = 0; k < (sizeof(numbers) / sizeof(int)); k++){
                    printf("%i", numbers[k]);
            }
            printf("\n");

            //if numbers[bigger] > numbers[bigger + 1], swap their positions
            if (numbers[bigger] > numbers[j]){
                int temp = numbers[j];
                numbers[j] = numbers[bigger];
                numbers[bigger] = temp;
                bigger = j;
                swap = 1;
            }
            //if numbers[bigger] < numbers[bigger + 1], move to numbers[bigger + 1] and compare it to numbers[bigger + 2]
            else if (numbers[bigger] < numbers[j]){
                bigger = j;
            }
        }

        //If no swaps are made, the array is already sorted therefore terminate the program
        if (swap == 0)
        {
            return 0;
        }
        //else keep sorting
        else{
            swap = 0;
        }
    }
}