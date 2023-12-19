#include <stdio.h>

int main() {
    int N, factorial = 1;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= N);

    printf("The factorial of %d is: %d\n", N, factorial);

    return 0;
}
