#include <stdio.h>

enum DayOfWeek {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    enum DayOfWeek day = Monday;
    printf("The integer value of Monday is: %d\n", day);

    return 0;
}
