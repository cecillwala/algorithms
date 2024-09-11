#include <stdio.h>

int fun(int n);
int main() {
    printf("%d \n", fun(3));
}

int fun(int n){
    if (n == 1){
        return 3;
    }
    else{
        return 1 + fun(n - 1);
    }
}