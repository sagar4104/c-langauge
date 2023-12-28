#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    int count = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
            count++;
        }
    }

    float average = (float)sum / count;

    printf("The average of the 2D array is: %.2f\n", average);

    return 0;
}