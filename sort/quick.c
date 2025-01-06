#include <stdio.h>
#include <stdlib.h>

int* quick(int arr[], int size);
int main(){
    int nums[] = {7, 2, 5, 4, 8, 0, 6, 3};
    int* arr = quick(nums, sizeof(nums) / sizeof(int));

    for(int i = 0; i < 8; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int* quick(int arr[], int size){
    for(int i = 1; i < size; i++){
        int j = 0;
        while(j < i){
            if(arr[i] < arr[i - 1]){
                int tmp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = tmp;
            }
            j++;
        }
    }
    return arr;
}