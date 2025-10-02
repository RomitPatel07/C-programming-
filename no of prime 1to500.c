#include <stdio.h>
#include <math.h>

int main() {
    int num, i, flag, count = 0;

    for (num = 2; num <= 500; num++) {  // numbers from 2 to 500
        flag = 0;  // assume prime

        for (i = 2; i <= sqrt(num); i++) {  // check divisibility
            if (num % i == 0) {
                flag = 1;  // not prime
                break;
            }
        }

        if (flag == 0) {
            count++;  // increment count for prime
        }
    }

    printf("Number of prime numbers between 1 and 500 = %d\n", count);

    return 0;
}