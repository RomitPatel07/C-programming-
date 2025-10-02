#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of cubes of digits
    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;  // cube of digit
        temp = temp / 10;
    }

    // Check if sum equals the original number
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}