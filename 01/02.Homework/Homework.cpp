#include "stdio.h"

int main() {
    int dividend = 123;
    int divisor = 3;
    int quotient = 0;
    while (dividend >= divisor) {
        int temp_divisor = divisor;
        int multiple = 1;
        while (dividend >= 2 * temp_divisor) {
            temp_divisor *= 2;
            multiple *= 2;
        }
        dividend -= temp_divisor;
        quotient += multiple;
    }
    printf("%d\n", quotient);

    return 0;
}