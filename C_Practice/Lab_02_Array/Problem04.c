// Problem 04: Write a C program to find the smallest element of an array.
#include <stdio.h>

int main() {
    int array[100], size, i;
    int min;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Assume the first element as the minimum
    min = array[0];

    // Iterate through the array to find the minimum element
    for (i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    // Print the minimum element
    printf("The smallest element in the array is: %d\n", min);

    return 0;
}
