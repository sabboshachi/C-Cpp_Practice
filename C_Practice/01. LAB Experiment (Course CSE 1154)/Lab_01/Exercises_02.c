// Write a C program to find the product of 4 integers entered by a user. If user enters 0 skip it. 

#include <stdio.h>

int main() {
    int num, product = 1;

    printf("Enter four integers:\n");

    for (int i = 0; i < 4; ++i) {
        scanf("%d", &num);

        // Skip if the entered number is zero
        if (num == 0) {
            printf("Skipping zero.\n");
            continue;
        }

        // Calculate the product
        product *= num;
    }

    printf("Product of non-zero integers: %d\n", product);

    return 0;
}