#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;
    int num3 = 8;
    int max_num;

    max_num = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The maximum number is: %d\n", max_num);

    return 0;
}