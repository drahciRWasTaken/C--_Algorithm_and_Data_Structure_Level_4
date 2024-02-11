#include "stdio.h"

int main() {
    int x;
    scanf("%d", &x);
    if (x > 0){
        printf("x is a positive number\n");
    } else if (x == 0) {
        printf("x is 0\n");
    } else {
        printf("x is a negative number\n");
    }
    return 0;
}
