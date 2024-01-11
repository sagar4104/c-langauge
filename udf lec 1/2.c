#include <stdio.h>

int isDivisibleBy3And5(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        return 1; // The number is divisible by both 3 and 5
    } else {
        return 0; // The number is not divisible by both 3 and 5
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = isDivisibleBy3And5(num);
    
    if (result == 1) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", num);
    }
    
    return 0;
}
