#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;
    int min_num;

    if (num1 < num2) {
        min_num = num1;
    }
    else {
        min_num = num2;
    }

    printf("The minimum number is: %d\n", min_num);

    return 0;
}
