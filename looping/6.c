#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = N;
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i--;
    } while (i >= 1);

    return 0;
}