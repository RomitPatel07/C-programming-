#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of factors (excluding the number itself)
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum = sum + i;   // Add factor to sum
        }
    }

    // Check if sum equals the original number
    if (sum == num)
        printf("%d is a Perfect number.", num);
    else
        printf("%d is NOT a Perfect number.", num);

    return 0;
}