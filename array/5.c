#include <stdio.h>

int main() {
    int arr1[] = {4, 5, 6};
    int arr2[] = {7, 8, 9};
    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedLength = length1 + length2;
    int merged[mergedLength];

    for (int i = 0; i < length1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < length2; i++) {
        merged[length1 + i] = arr2[i];
    }

    printf("The merged array is: ");
    for (int i = 0; i < mergedLength; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}