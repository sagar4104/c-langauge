#include <stdio.h>

int isMagicNumber(int num) {
    int sum = 0;
    
    while (num > 9) {
        sum = 0;
        
        while (num != 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        
        num = sum;
    }
    
    return (num == 1);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isMagicNumber(num)) {
        printf("%d is a magic number!", num);
    } else {
        printf("%d is not a magic number.", num);
    }
    
    return 0;
}
