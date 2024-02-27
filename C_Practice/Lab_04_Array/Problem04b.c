// Problem 04b: The annual examination result of 20 students is tabulated as follow:
// Roll no.              Sub1                 Sub2                      Sub3
// Write a C program to read the data and determine the followings:
// b)	The highest mark in each subject and the roll no. of the student who obtained it.


#include <stdio.h>

int main() {
    int rollNo[20], sub1[20], sub2[20], sub3[20];
    int maxSub1 = -1, maxSub2 = -1, maxSub3 = -1;
    int rollNoSub1, rollNoSub2, rollNoSub3;
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

        // Update maximum marks for each subject and the corresponding roll number
        if (sub1[i] > maxSub1) {
            maxSub1 = sub1[i];
            rollNoSub1 = rollNo[i];
        }
        if (sub2[i] > maxSub2) {
            maxSub2 = sub2[i];
            rollNoSub2 = rollNo[i];
        }
        if (sub3[i] > maxSub3) {
            maxSub3 = sub3[i];
            rollNoSub3 = rollNo[i];
        }
    }

    // Display the highest marks in each subject along with the roll number of the student
    printf("\nHighest marks in each subject and the roll no. of the student who obtained it:\n");
    printf("Highest mark in Sub1: %d (Student Roll No.: %d)\n", maxSub1, rollNoSub1);
    printf("Highest mark in Sub2: %d (Student Roll No.: %d)\n", maxSub2, rollNoSub2);
    printf("Highest mark in Sub3: %d (Student Roll No.: %d)\n", maxSub3, rollNoSub3);
    return 0;
}

