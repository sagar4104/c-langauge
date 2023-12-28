#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSums[ROWS] = {0};

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            rowSums[i] += arr[i][j];
        }
    }

    printf("The row-wise sums are: ");
    for (int i = 0; i < ROWS; i++) {
        printf("%d ", rowSums[i]);
    }

    return 0;
}

