// Problem 04c: The annual examination result of 20 students is tabulated as follow:
// Roll no.              Sub1                 Sub2                      Sub3
// Write a C program to read the data and determine the followings:
// a)	Total marks obtained by each student
// b)	The highest mark in each subject and the roll no. of the student who obtained it.
// c)	The student who obtained the highest total marks.

#include <stdio.h>

int main() {
    int rollNo[20], sub1[20], sub2[20], sub3[20];
    int totalMarks[20];
    int highestTotalMarks = -1;
    int highestTotalMarksIndex;
    int i;

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

        // Calculate total marks for each student
        totalMarks[i] = sub1[i] + sub2[i] + sub3[i];

        // Update highest total marks and corresponding index
        if (totalMarks[i] > highestTotalMarks) {
            highestTotalMarks = totalMarks[i];
            highestTotalMarksIndex = i;
        }
    }

    // Display the student who obtained the highest total marks
    printf("\nStudent who obtained the highest total marks:\n");
    printf("Roll No.: %d\n", rollNo[highestTotalMarksIndex]);
    printf("Total Marks: %d\n", highestTotalMarks);
    return 0;
}
