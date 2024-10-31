#include <stdio.h>

void decToBin(int num, int base);
int main(){
    decToBin(3, 2);
    printf("\n");
}

void decToBin(int num, int base){
    if(num > 0){
        decToBin(num / base, base);
    }

    printf("%i", num%base);
}