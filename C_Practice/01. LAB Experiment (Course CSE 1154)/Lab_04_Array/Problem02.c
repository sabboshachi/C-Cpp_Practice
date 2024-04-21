// Problem 02: Write a C program to draw a multiplication table using two-dimensional array.


#include <stdio.h>

int main() {
    int table[10][10];
    int i, j;

    // Fill the table with multiplication values
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            table[i][j] = (i + 1) * (j + 1);
        }
    }

    // Display the multiplication table
    printf("Multiplication Table:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%3d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
