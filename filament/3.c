#include <stdio.h>
#include <string.h>

void replaceCharacter(char *str, char oldChar, char newChar) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[] = "Rinkam";
    char oldChar = 'm';
    char newChar = 'l';

    printf("Original string: %s\n", str);

    replaceCharacter(str, oldChar, newChar);

    printf("Modified string: %s\n", str);

    return 0;
}
