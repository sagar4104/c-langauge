#include <stdio.h>

#define SIZE 3

int main() {
    int arr[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int crossDiagonalSum = 0;

    for (int i = 0; i < SIZE; i++) {
        crossDiagonalSum += arr[i][i];
    }

    printf("The cross-diagonal sum is: %d", crossDiagonalSum);

    return 0;
}