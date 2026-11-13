#include <stdio.h>

int main() {
    int i, j, count, sum = 0;

    for (i = 2; i <= 100; i++) {
        count = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            sum = sum + i;
        }
    }

    printf("Sum of prime numbers = %d\n", sum);

    return 0;
}
