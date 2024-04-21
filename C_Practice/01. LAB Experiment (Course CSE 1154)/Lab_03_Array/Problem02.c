// Problem 02: Write a C program to put even and odd elements of an array in two separate arrays.
#include <stdio.h>

int main() {
    int array[100], evenArray[100], oddArray[100];
    int size, i, evenCount = 0, oddCount = 0;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Separate even and odd elements into separate arrays
    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            evenArray[evenCount] = array[i];
            evenCount++;
        } else {
            oddArray[oddCount] = array[i];
            oddCount++;
        }
    }

    // Print the even elements array
    printf("Even elements array: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    // Print the odd elements array
    printf("Odd elements array: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArray[i]);
    }
    printf("\n");

    return 0;
}
