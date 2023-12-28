#include <stdio.h>

void printNegativeElements(int arr[], int size) {
    printf("Negative elements in the array: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {5, -2, 9, -7, 0, -3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printNegativeElements(arr, size);

    return 0;
}