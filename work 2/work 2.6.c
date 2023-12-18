#include <stdio.h>

int main() {
    int a, b, c, d;
    
    printf("Enter the values of a, b, c, and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int max = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d)) : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));
    
    printf("The maximum value is: %d\n", max);
    
    return 0;
}