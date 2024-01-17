#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr);
        ptr++;
    }

    reverseArray(arr, size);

    printf("The reversed array is:\n");
    ptr = arr;
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}