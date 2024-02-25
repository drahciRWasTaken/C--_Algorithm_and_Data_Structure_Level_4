#include "stdio.h"

int main() 
{
    int a[100] = {1,2,3,5,6,7};
    int x = 4;
    int pos = 3;
    int n = 6;

    if (pos < 0 || pos > n){
        printf("Invalid insertion position\n");
        return 0;
    } 

    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = x;

    n++; 

    printf("Array after insertion: ");
    for (int i = 0; i < n; i ++){
        printf("%d", a[i]);
    }

    return 0;
}