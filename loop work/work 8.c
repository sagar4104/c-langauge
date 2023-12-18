#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int sum = 0;
    int i = 1;

    while (i <= N) {
        sum += i;
        i++;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}
