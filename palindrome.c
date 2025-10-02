#include <stdio.h>

int main() {
    int num, temp, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Reverse the number
    while (temp != 0) {
        digit = temp % 10;                 // Get last digit
        reversed = reversed * 10 + digit;  // Append digit
        temp = temp / 10;                  // Remove last digit
    }

    // Check if original and reversed numbers are the same
    if (num == reversed)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}