#include <stdio.h>

int main() {
    int rows = 5; 
    int i,j;
    for ( i = 1; i <= rows; i++) {
        for ( j = 1; j <= rows - i + 1; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}