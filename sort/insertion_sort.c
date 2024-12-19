#include <stdio.h>

//Insertion sort is a sorting algorithm that compares the [i]th item with [i-1]th starting with index 1 
//and swaps the two if the left one is bigger than the right
int main(){
    int nums[] = {7, 2, 5, 4, 1, 8, 0, 6, 3};
    int size = 9;

    for(int i = 0; i < size; i++){
        printf("%i ", nums[i]);
    }
    printf("\n");

    //For loop starting with nums[1]
    for (int i = 1; i < size; i++){
        //a variable to remember tumefika wapi in the aaray kwa kusort
        int j = i;
        //Kama hatujafikia the first element na nums[j-1] ni kubwa kuliku nums[j]],
        //zi swap alafu toa moja kwa j
        while(j > 0 && nums[j - 1] > nums[j]){
            int tmp = nums[j];
            nums[j] = nums[j - 1];
            nums[j - 1] = tmp;
            j--;

            for(int i = 0; i < size; i++){
                printf("%i ", nums[i]);
            }
            printf("\n");
        }
    }
}