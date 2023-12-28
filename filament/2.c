#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    // String Length
    int length = strlen(str1);
    printf("Length of the string: %d\n", length);

    // String Copy
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    // String Concatenation
    printf("Enter another string: ");
    scanf("%s", str1);
    strcat(str2, str1);
    printf("Concatenated string: %s\n", str2);

    // String Comparison
    printf("Enter a string for comparison: ");
    scanf("%s", str1);
    int result = strcmp(str2, str1);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String 1 is less than string 2.\n");
    else
        printf("String 1 is greater than string 2.\n");

    return 0;
}