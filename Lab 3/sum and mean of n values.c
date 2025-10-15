#include <stdio.h>

int main() {
    int i, n;
    float sum = 0, mean, value;

    printf("Enter number of values: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &value);
        sum += value;
    }

    mean = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}