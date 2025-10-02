#include <stdio.h>

int main() {
    int i;
    float values[10], sum = 0, mean;

    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &values[i]);
        sum += values[i];  // Add each value to sum
    }

    mean = sum / 10;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}