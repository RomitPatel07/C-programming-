#include <stdio.h>

int main() {
    int i, j, count, sum = 0;

    for (i = 2; i <= 500; i++) {
        count = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {   // If divisible, not prime
                count = 1;
                break;
            }
        }
        if (count == 0)        // If prime, add to sum
            sum = sum + i;
    }

    printf("Sum of all prime numbers between 1 and 500 = %d", sum);

    return 0;
}