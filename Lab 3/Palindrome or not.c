#include <stdio.h>

int main() {
    int num, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store original number

    while (num > 0) {
        digit = num % 10;         // Get last digit
        rev = rev * 10 + digit;   // Build reversed number
        num = num / 10;           // Remove last digit
    }

    if (original == rev)
        printf("The number is a Palindrome.");
    else
        printf("The number is NOT a Palindrome.");

    return 0;
}