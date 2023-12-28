#include <stdio.h>

#define ROWS 3
#define COLS 3

void transposeMatrix(int mat[][COLS], int transposed[][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposed[j][i] = mat[i][j];
        }
    }
}

void displayMatrix(int mat[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposed[COLS][ROWS];

    transposeMatrix(mat, transposed);

    printf("Original Matrix:\n");
    displayMatrix(mat);

    printf("\nTransposed Matrix:\n");
    displayMatrix(transposed);

    return 0;
}