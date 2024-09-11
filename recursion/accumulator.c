#include <stdio.h>

int accumulator(int arr[], int n);
int main(){
    int numbers[5] = {1, 2, 3, 4, 5};
    printf("%d\n", sizeof(numbers));
    printf("%d\n", accumulator(numbers, 0));
}

int accumulator(int arr[], int n){
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        n += arr[i];
        printf("%d\n", sizeof(arr));
    }
    return n;
}