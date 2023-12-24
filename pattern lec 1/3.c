#include <stdio.h>

int main() {
    int rows = 5; 
    int i,j;
    for ( i = 5; i >= 1; i--) {
        for ( j = 5; j >= i; j--) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

