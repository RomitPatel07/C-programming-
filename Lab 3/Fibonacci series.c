#include <stdio.h>

int main() {
    int n, i;
    int first = 1, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive integer.");
        return 0;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    return 0;
}