#include <stdio.h>

int main() {
    int a, b, c, d, e;
    
    printf("Enter the values of a, b, c, d, and e: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    int max = (a > b) ? ((a > c) ? ((a > d) ? ((a > e) ? a : e) : ((d > e) ? d : e)) : ((c > d) ? ((c > e) ? c : e) : ((d > e) ? d : e))) : ((b > c) ? ((b > d) ? ((b > e) ? b : e) : ((d > e) ? d : e)) : ((c > d) ? ((c > e) ? c : e) : ((d > e) ? d : e)));
    
    printf("The maximum value is: %d\n", max);
    
    return 0;
}
