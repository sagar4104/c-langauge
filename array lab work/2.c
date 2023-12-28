#include <stdio.h>

int main() {
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("The length of the 2D array is: %d rows x %d columns\n", rows, cols);

    return 0;
}
