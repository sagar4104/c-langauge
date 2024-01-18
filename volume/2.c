#include <stdio.h>

typedef union {
    int rollNo;
    char name[50];
    int chemMarks;
    int mathsMarks;
    int phyMarks;
} Marks;

int main() {
    Marks students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter the details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Chemistry Marks: ");
        scanf("%d", &students[i].chemMarks);
        printf("Mathematics Marks: ");
        scanf("%d", &students[i].mathsMarks);
        printf("Physics Marks: ");
        scanf("%d", &students[i].phyMarks);
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        float percentage = (students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks) / 3.0;
        printf("Student %d (%s) - Percentage: %.2f%%\n", students[i].rollNo, students[i].name, percentage);
    }

    return 0;
}

