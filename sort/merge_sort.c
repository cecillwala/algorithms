#include <stdio.h>
#include <stdlib.h>

int* split(int arr[], int size);
int* merge(int arr_l[], int arr_r[], int L, int R);
void print(int arr[], int size);
int main(){
    int nums[] = {7, 2, 5, 4, 8, 0, 6, 3};
    int size = 9;
    print(split(nums, size), size);
}

int* split(int arr[], int size){
    if(size < 2){
        return arr;
    }
    int L = size / 2;
    int R = size - L;
    int arr_l[L];
    int arr_r[R];

    for(int i = 0; i <= L; i++){
        arr_l[i] = arr[i];
    }

    for(int i = 0; i <= R; i++){
        arr_r[i] = arr[i + L];
    }
    split(split(arr_l, L), L);
    split(split(arr_r, R), R);
    return merge(arr_l, arr_r, L, R);
}

int* merge(int arr_l[], int arr_r[], int L, int R){
    int i = 0;
    int j = 0;
    int k = 0;
    int* arr = malloc((L + R) * sizeof(int));
    while(i <= L && i <= R){
        if(arr_l[k] > arr_r[j]){
            arr[i] = arr_r[j];
            i++;
            j++;
        }
        else{
            arr[i] = arr_l[k];
            i++;
            k++;
        }
    }
    return arr;
}


void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");
}
