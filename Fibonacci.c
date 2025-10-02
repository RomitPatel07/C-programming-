#include <stdio.h>

int main() {
    int n, i;
    long long first = 1, second = 1, next;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
        } else {
            next = first + second;
            printf("%lld ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}