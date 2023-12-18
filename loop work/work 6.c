#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = N;

    while (i >= 1) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i--;
    }

    return 0;
}
