#include <stdio.h>

int main() {
    float gross, allowances, deductions, net;

    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowances = 0.10 * gross;
        deductions = 0.03 * gross;
    }
    else if (gross > 5000) {
        allowances = 0.07 * gross;
        deductions = 0.02 * gross;
    }
    else {
        allowances = 0;   // Not mentioned, assume 0
        deductions = 0;   // Not mentioned, assume 0
    }

    net = gross + allowances - deductions;

    printf("Net Salary = %.2f\n", net);

    return 0;
}