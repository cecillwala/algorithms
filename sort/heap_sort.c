#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//Node structure
typedef struct node{
    int number;
    struct node *left;
    struct node *right;
}node;

void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void print(int arrL[], int L);
int main(){
    int arr[] = {9, 4, 3, 8, 10, 2, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);

    for(int i = 0; i < n; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        int tmp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = tmp;
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
      // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
        print(arr, n);
    }

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {

        // Move current root to end
        int temp = arr[0]; 
        arr[0] = arr[i];
        arr[i] = temp;

        print(arr, n);

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void print(int arrL[], int L){
    printf("Left half: ");
    for(int i = 0; i < L; i++){
        printf("%i ", arrL[i]);
    }
    printf("\n");
}