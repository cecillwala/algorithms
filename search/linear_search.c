#include <stdio.h>
#include <string.h>

int main() {
    int numbers[10] = {3, 2, 3, 4, 2, 78, 9, 87, 6 ,5};
    int target;
    printf("Target: ");
    if (scanf("%i", &target) != 1){
        return 1;
    }

    for (int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        if(numbers[i] == target){
            printf("%i\n", i);
            return 2;
        }
    }
    printf("None\n");
}

