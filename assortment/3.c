#include <stdio.h>

void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }

    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    (*size)++;

    printf("Element %d inserted at position %d.\n", element, position);
    displayArray(arr, *size);
}

void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return;
    }

    int deletedElement = arr[position];

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;

    printf("Element %d deleted from position %d.\n", deletedElement, position);
    displayArray(arr, *size);
}

void updateElement(int arr[], int size, int position, int newValue) {
    if (position < 0 || position >= size) {
        printf("Invalid position for updating.\n");
        return;
    }

    int oldValue = arr[position];
    arr[position] = newValue;

    printf("Element at position %d updated from %d to %d.\n", position, oldValue, newValue);
    displayArray(arr, size);
}

int main() {
    int arr[100] = {5, 2, 9, 7, 0, 3};
    int size = 6;

    displayArray(arr, size);

    insertElement(arr, &size, 4, 2);
    deleteElement(arr, &size, 3);
    updateElement(arr, size, 1, 8);

    return 0;
}