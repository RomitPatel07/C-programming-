#include <stdio.h>
#include <math.h>

int main() {
    long num, square, temp, digits = 0, divisor;

    printf("Enter a number: ");
    scanf("%ld", &num);

    square = num * num;

    // Count number of digits in the number
    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate divisor = 10^digits
    divisor = pow(10, digits);

    // Check if last digits of square equal the number
    if (square % divisor == num)
        printf("%ld is an Automorphic number.\n", num);
    else
        printf("%ld is not an Automorphic number.\n", num);

    return 0;
}