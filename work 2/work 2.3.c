#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;
    int num3 = 8;
    int num4 = 12;
    int max_num;

    if (num1 >= num2) {
        if (num1 >= num3) {
            if (num1 >= num4) {
                max_num = num1;
            } else {
                max_num = num4;
            }
        } else {
            if (num3 >= num4) {
                max_num = num3;
            } else {
                max_num = num4;
            }
        }
    } else {
        if (num2 >= num3) {
            if (num2 >= num4) {
                max_num = num2;
            } else {
                max_num = num4;
            }
        } else {
            if (num3 >= num4) {
                max_num = num3;
            } else {
                max_num = num4;
            }
        }
    }

    printf("The maximum number is: %d\n", max_num);

    return 0;
}