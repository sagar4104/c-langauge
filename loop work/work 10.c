#include <stdio.h>

void multiplication_table(int n) {
    int i = 1;
    while (i <= 10) {
        int result = n * i;
        printf("%d x %d = %d\n", n, i, result);
        i++;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    multiplication_table(num);
    
    return 0;
}
