#include <stdio.h>

int smallest(int arr[], int size) {
    int min = arr[0];
    int i;

    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int numbers[] = {10, 5, 20, 8, 15};
    int result;

    result = smallest(numbers, 5);

    printf("The smallest number is: %d\n", result);

    return 0;
}
