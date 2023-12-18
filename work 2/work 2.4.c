#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;
    int num3 = 8;
    int num4 = 12;
    int num5 = 3;
    int min_num;

    if (num1 <= num2) {
        if (num1 <= num3) {
            if (num1 <= num4) {
                if (num1 <= num5) {
                    min_num = num1;
                } else {
                    min_num = num5;
                }
            } else {
                if (num4 <= num5) {
                    min_num = num4;
                } else {
                    min_num = num5;
                }
            }
        } else {
            if (num3 <= num4) {
                if (num3 <= num5) {
                    min_num = num3;
                } else {
                    min_num = num5;
                }
            } else {
                if (num4 <= num5) {
                    min_num = num4;
                } else {
                    min_num = num5;
                }
            }
        }
    } else {
        if (num2 <= num3) {
            if (num2 <= num4) {
                if (num2 <= num5) {
                    min_num = num2;
                } else {
                    min_num = num5;
                }
            } else {
                if (num4 <= num5) {
                    min_num = num4;
                } else {
                    min_num = num5;
                }
            }
        } else {
            if (num3 <= num4) {
                if (num3 <= num5) {
                    min_num = num3;
                } else {
                    min_num = num5;
                }
            } else {
                if (num4 <= num5) {
                    min_num = num4;
                } else {
                    min_num = num5;
                }
            }
        }
    }

    printf("The minimum number is: %d\n", min_num);

    return 0;
}
