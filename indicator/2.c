#include <stdio.h>

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

    printf("The elements of the array are:\n");
    ptr = arr;
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
