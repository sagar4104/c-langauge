#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = N;

    while (i >= 1) {
        printf("%d ", i);
        i--;
    }

    return 0;
}
