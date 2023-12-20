#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", firstTerm, secondTerm);

    for (int i = 3; i <= n; i++) {
        nextTerm = firstTerm + secondTerm;
        printf(", %d", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}
