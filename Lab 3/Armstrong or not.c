#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store the original number

    while (num > 0) {
        digit = num % 10;              // Get last digit
        sum = sum + (digit * digit * digit);  // Add cube of the digit
        num = num / 10;                // Remove last digit
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}