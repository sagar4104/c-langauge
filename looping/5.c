#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = 1;
    do {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= N);

    return 0;
}