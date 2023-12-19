#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= N);

    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}