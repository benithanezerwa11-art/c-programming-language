#include <stdio.h>

int secondLargest(int arr[], int size) {
    int largest = arr[0];
    int second;
    int found = 0;
    int i;

    for (i = 1; i < size; i++) {

        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
            found = 1;
        }
        else if (arr[i] < largest) {

            if (found == 0 || arr[i] > second) {
                second = arr[i];
                found = 1;
            }
        }
    }

    return second;
}

int main() {
    int numbers[5] = {10, 5, 20, 8, 15};

    int result = secondLargest(numbers, 5);

    printf("Second largest number = %d\n", result);

    return 0;
}
