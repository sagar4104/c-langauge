#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = 1;
    do {
        printf("%d x %d = %d\n", N, i, N * i);
        i++;
    } while (i <= 10);

    return 0;
}