#include <stdio.h>

int main() {
    int num, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse order: ");

    temp = num;
    while (temp > 0) {
        digit = temp % 10;  // get last digit
        printf("%d ", digit);
        temp = temp / 10;   // remove last digit
    }

    printf("\n");

    return 0;
}