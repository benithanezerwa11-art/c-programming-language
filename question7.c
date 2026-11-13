#include <stdio.h>

int main() {
    int number, i = 1;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (i <= number) {
        factorial = factorial * i;
        i++;
    }

    printf("Factorial = %d\n", factorial);

    return 0;
}
