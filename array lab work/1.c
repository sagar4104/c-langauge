#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int arr[MAX_SIZE][MAX_SIZE];
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The entered array is:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
