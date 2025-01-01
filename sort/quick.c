#include <stdio.h>
#include <stdlib.h>

void quick(int arr[], int size);
int main(){
    int nums[] = {7, 2, 5, 4, 8, 0, 6, 3};
    quick(nums, sizeof(nums) / sizeof(int));
}

void quick(int arr[], int size){
    int i = 1;
    // for(int i = 1; i < size; i++){
        while(i < size){
            if(arr[i] < arr[i - 1]){
                int tmp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = tmp;
            }
            i++;
        // }
    }

    for(int i = 0; i < size; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");
}