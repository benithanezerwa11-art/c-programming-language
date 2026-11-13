#include <stdio.h>

int main() {
    int numbers[] = {2, 5, 2, 8, 2, 10};
    int element, count = 0;
    int i;

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (i = 0; i < 6; i++) {
        if (numbers[i] == element) {
            count++;
        }
    }

    printf("The element occurs %d times.\n", count);

    return 0;
}
