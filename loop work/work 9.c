#include <stdio.h>

int factorial(int n) {
    int result = 1;
    while (n > 0) {
        result *= n;
        n--;
    }
    return result;
}

int main() {
    int num = 5;
    int factorial_num = factorial(num);
    printf("The factorial of %d is %d\n", num, factorial_num);
    
    return 0;
}