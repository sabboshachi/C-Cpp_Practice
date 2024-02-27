// Problem 04a: The annual examination result of 20 students is tabulated as follow:
// Roll no.              Sub1                 Sub2                      Sub3
// Write a C program to read the data and determine the followings:
// a)	Total marks obtained by each student

#include <stdio.h>

int main() {
    int rollNo[20], sub1[20], sub2[20], sub3[20];
    int i, totalMarks;

    // Input data for each student
    printf("Enter data for 20 students:\n");
    for (i = 0; i < 20; i++) {
        printf("Enter Roll No. of student %d: ", i + 1);
        scanf("%d", &rollNo[i]);
        printf("Enter marks for Sub1 for student %d: ", i + 1);
        scanf("%d", &sub1[i]);
        printf("Enter marks for Sub2 for student %d: ", i + 1);
        scanf("%d", &sub2[i]);
        printf("Enter marks for Sub3 for student %d: ", i + 1);
        scanf("%d", &sub3[i]);
    }

    // Calculate total marks obtained by each student and display
    printf("\nTotal marks obtained by each student:\n");
    for (i = 0; i < 20; i++) {
        totalMarks = sub1[i] + sub2[i] + sub3[i];
        printf("Student %d (Roll No. %d): %d\n", i + 1, rollNo[i], totalMarks);
    }
    return 0;
}
