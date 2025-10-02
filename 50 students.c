#include <stdio.h>

int main() {
    int boys = 0, girls = 0;
    char sex;
    
    printf("Enter sex code for 50 students (M for boys, F for girls):\n");
    
    for (int i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &sex); // space before %c to skip newline
        
        if (sex == 'M' || sex == 'm') {
            boys++;
        } else if (sex == 'F' || sex == 'f') {
            girls++;
        } else {
            printf("Invalid input! Please enter M or F.\n");
            i--; // repeat this iteration for valid input
        }
    }
    
    printf("Number of boys = %d\n", boys);
    printf("Number of girls = %d\n", girls);
    
    return 0;
}