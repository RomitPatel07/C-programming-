#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 2 * i;  // Add ith even number
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);

    return 0;
}