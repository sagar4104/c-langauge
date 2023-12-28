#include <stdio.h>

#define SIZE 3

int main() {
    int arr[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int antiDiagonalSum = 0;

    for (int i = 0; i < SIZE; i++) {
        antiDiagonalSum += arr[i][SIZE - 1 - i];
    }

    printf("The anti-diagonal sum is: %d", antiDiagonalSum);

    return 0;
}