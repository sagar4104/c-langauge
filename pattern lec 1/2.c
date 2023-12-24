#include <stdio.h>

int main() {
    int rows = 5; 
     int i,j;
    for ( i = 0; i < rows; i++) {
        for ( j = rows - i; j <= rows; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }


}
