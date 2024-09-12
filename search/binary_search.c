#include <stdio.h>
#include <string.h>

int binary_search(int list[], int target, int first, int last);
int main() {
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index = binary_search(list, 10, 0, sizeof(list)/sizeof(int) - 1);
    printf("%i\n", index);
}


int binary_search(int list[], int target, int first, int last){
    int midpoint = (last + first) / 2;
    printf("Current Mid-point: %i\n", midpoint);
    if(list[midpoint] == target){
        return midpoint;
    }
    else if(list[midpoint] < target){
        return binary_search(list, target, midpoint + 1, last);
    }
    else{
       return binary_search(list, target, first, midpoint - 1);
    }
}