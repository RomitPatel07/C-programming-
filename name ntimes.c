#include <stdio.h>

int main() {
    int i, n;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);  // Use %s for a single-word name

    printf("Enter how many times to print your name: ");
    scanf("%d", &n);

    printf("Printing your name %d times:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%s\n", name);
    }

    return 0;
}