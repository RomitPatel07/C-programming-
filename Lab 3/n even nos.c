#include <stdio.h>

int main() {
    int n, i;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("First %d Even Numbers:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }

    return 0;
}