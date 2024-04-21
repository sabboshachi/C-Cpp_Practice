// Problem 03: Write a C program to find the largest element of an array.
#include <stdio.h>

int main() {
    int array[100], size, i;
    int max;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Assume the first element as the maximum
    max = array[0];

    // Iterate through the array to find the maximum element
    for (i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Print the maximum element
    printf("The largest element in the array is: %d\n", max);

    return 0;
}
