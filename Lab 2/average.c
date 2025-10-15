#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float avg;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    // Check if student failed in any subject
    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: FAIL (Marks below 35 in one or more subjects)\n");
    }
    else {
        total = m1 + m2 + m3;
        avg = total / 3.0;

        printf("Total = %d\n", total);
        printf("Average = %.2f\n", avg);

        if (avg >= 70)
            printf("Grade: Distinction\n");
        else if (avg >= 60)
            printf("Grade: First\n");
        else if (avg >= 50)
            printf("Grade: Second\n");
        else if (avg >= 35)
            printf("Grade: Third Class\n");
        else
            printf("Grade: Fail\n");
    }

    return 0;
}