// Write a C program to display the following output using for loop.

#include <stdio.h>

int main() {
    int rows = 6;

    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int space = 1; space <= rows - i; ++space)
            printf(" ");

        // Print stars
        for (int j = 1; j <= i; ++j)
            printf("* ");

        // Move to the next line
        printf("\n");
    }

    return 0;
}
