// Write a c program to find number of digits in a number.

#include <stdio.h>

int main() {
    int n, number, remainder, reverse = 0, digitCount = 0;
    printf("Enter a number:");
    scanf("%d", &number);
    n = number;
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
        digitCount++;  // Increment digit count for each digit
    }
    printf("Number of digits in %d is: %d\n", n, digitCount);
    return 0;
}



