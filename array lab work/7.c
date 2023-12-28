#include <stdio.h>

#define SIZE 3

int main() {
    int arr[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int diagonalSum = 0;

    for (int i = 0; i < SIZE; i++) {
        diagonalSum += arr[i][i];
    }

    printf("The diagonal sum is: %d", diagonalSum);

    return 0;
}