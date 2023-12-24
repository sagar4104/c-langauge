#include <stdio.h>

int main() {
    int rows = 5;
    int startNum = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  "); 
        }
        for (int j = rows - i; j <= rows; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
