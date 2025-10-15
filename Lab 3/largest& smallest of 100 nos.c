#include <stdio.h>

int main() {
    int i, n;
    float num, largest, smallest;

    printf("Enter 100 numbers:\n");

    // Read the first number
    scanf("%f", &num);
    largest = smallest = num;

    // Read remaining 99 numbers
    for (i = 2; i <= 100; i++) {
        scanf("%f", &num);

        if (num > largest)
            largest = num;
        if (num < smallest)
            smallest = num;
    }

    printf("Largest number = %.2f\n", largest);
    printf("Smallest number = %.2f\n", smallest);

    return 0;
}