#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;
    int num3 = 8;
    int min_num;

    if (num1 <= num2) {
        if (num1 <= num3) {
            min_num = num1;
        } else {
            min_num = num3;
        }
    } else {
        if (num2 <= num3) {
            min_num = num2;
        } else {
            min_num = num3;
        }
    }

    printf("The minimum number is: %d\n", min_num);

    return 0;
}
