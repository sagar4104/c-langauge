#include <stdio.h>

int findLargestNumber(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int arr[] = {5, 2, 9, 7, 0, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largestNumber = findLargestNumber(arr, size);

    printf("The largest number in the array is: %d\n", largestNumber);

    return 0;
}
