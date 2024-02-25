#include "stdio.h"

int main() {
    int a[5] = {1,2,3,4,5};
    int x = 4;
    int index = -1;
    for (int i = 0;i < 5; i++) {
        if (x == a[i]) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        printf("%d is in position %d\n", x, index);
    } else {
        printf("%d is not in the array\n, x");
    }

    return 0;
}


// Time complexity is 0(n)