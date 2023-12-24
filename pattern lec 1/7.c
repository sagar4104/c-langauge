#include <stdio.h>

int main() {
    int rows = 5;
    char currentChar = 'A';

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", currentChar - j);
        }
        printf("\n");
        currentChar++;
    }

    return 0;
}
