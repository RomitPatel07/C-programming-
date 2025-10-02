#include <stdio.h>
#include <math.h>

int main() {
    int num, i, flag;

    printf("Prime numbers between 1 and 500 are:\n");

    for (num = 2; num <= 500; num++) {  // start from 2
        flag = 0;  // assume prime

        for (i = 2; i <= sqrt(num); i++) {  // check divisibility up to sqrt(num)
            if (num % i == 0) {
                flag = 1;  // divisible → not prime
                break;
            }
        }

        if (flag == 0)
            printf("%d ", num);
    }

    printf("\n");
    return 0;
}