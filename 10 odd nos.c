#include <stdio.h>

int main() {
    int i;
    printf("First 10 Odd Numbers:\n");

    for (i = 1; i <= 19; i += 2) {
        printf("%d ", i);
    }

    return 0;
}