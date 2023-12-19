#include <stdio.h>

int main() {
    int N, factorial = 1;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %d\n", N, factorial);

    return 0;
}
