#include <stdio.h>

int main() {
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is NOT a Prime number.", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {   // If divisible, not prime
            count = 1;
            break;
        }
    }

    if (count == 0)
        printf("%d is a Prime number.", num);
    else
        printf("%d is NOT a Prime number.", num);

    return 0;
}