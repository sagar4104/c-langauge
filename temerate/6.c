#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number is not defined.");
    } else {
        for (i = 1; i <= number; i++) {
            factorial *= i;
        }

        printf("The factorial of %d is %llu.", number, factorial);
    }

    return 0;
}
