#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int sumArray[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sumArray[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The result of the addition is:\n");

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", sumArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}