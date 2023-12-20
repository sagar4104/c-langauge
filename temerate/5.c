#include <stdio.h>

int main() {
    int num, originalNum, reverseNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }

    printf("The reverse of the number is: %d\n", reverseNum);

    if (originalNum == reverseNum) {
        printf("The number is a palindrome!");
    } else {
        printf("The number is not a palindrome.");
    }

    return 0;
}
