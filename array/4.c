#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int length = sizeof(arr1) / sizeof(arr1[0]);
    int sum[length];

    for (int i = 0; i < length; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("The sum of the arrays is: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}