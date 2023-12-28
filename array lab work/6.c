#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int colSums[COLS] = {0};

    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            colSums[j] += arr[i][j];
        }
    }

    printf("The column-wise sums are: ");
    for (int j = 0; j < COLS; j++) {
        printf("%d ", colSums[j]);
    }

    return 0;
}