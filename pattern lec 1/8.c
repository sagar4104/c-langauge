#include <stdio.h>

int main() {
    int rows = 5;
    int currentNumber = 1; 
    int i,j;
    for ( i = 1; i <= rows; i++) {
        for ( j = 1; j <= i; j++) {
            printf("%d ", currentNumber);
            currentNumber++; 
        }
        printf("\n");
    }


}
