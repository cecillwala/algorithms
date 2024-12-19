#include <stdio.h>
#include <stdlib.h>

void print(int arr[], int size);
int* split(int arr[], int size);
int* merge(int left[], int right[], int L, int R);
int* beauty_search(int arr[], int target, int first, int last);
int main(){
    int items[] = {
        {7, 4}, {2, 5}, {5, 3}, {4, 6}, {1, 2}, 
        {8, 4}, {0, 9}, {6, 8}, {9, 1}, {3, 3}
    };
    int size = 10;
    int* result = beauty_search(items, 3, 0, sizeof(items) / sizeof(int));
}


int* split(int arr[], int size){
    if (size < 2){
        return arr;
    }
    int L = size / 2;
    int R = size - L;
    int* left = malloc(L * sizeof(int));
    for(int i = 0; i < L; i++){
        left[i] = arr[i];
    }
    int* right = malloc(R * sizeof(int));
    for(int j = 0; j < R; j++){
        right[j] = arr[j + L];
    }
    left = split(left, L);
    right = split(right, R);
    return merge(left, right, L, R);
}


int* merge(int left[], int right[], int L, int R){
    int* arr = malloc((L + R) * sizeof(int));
    int i = 0;
    int j = 0;
    int k = 0;
    while(j < L && k < R){
        if(left[j] < right[k]){
            arr[i] = left[j];
            j++;
        }
        else{
            arr[i] = right[k];
            k++;
        }
        i++;
    }

    while(j < L){
        arr[i++] = left[j++];
    }

    while(k < R){
        arr[i++] = right[k++];
    }
    return arr;
}


void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");
}


int* beauty_search(int arr[], int target, int first, int last){

    int midpoint = (first + last) / 2;
    if (target == arr[midpoint][0]){
        return midpoint;
    }
    else if (target > arr[midpoint][0]){
        return beauty_search(arr, target, midpoint + 1, last);
    }
    else{
        return beauty_search(arr, target, first, midpoint - 1);
    }
}