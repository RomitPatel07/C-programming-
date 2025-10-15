#include <stdio.h>

int main() {
    int num, square, temp, digitCount = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Count number of digits in the number
    temp = num;
    while (temp > 0) {
        digitCount++;
        temp = temp / 10;
    }

    square = num * num;

    // Check if last digits of square are equal to the number
    temp = square;
    for (i = 0; i < digitCount; i++) {
        if (temp % 10 != num % 10) {
            printf("%d is NOT an Automorphic number.", num);
            return 0;
        }
        temp = temp / 10;
        num = num / 10;
    }

    printf("The number is an Automorphic number.");
    return 0;
}