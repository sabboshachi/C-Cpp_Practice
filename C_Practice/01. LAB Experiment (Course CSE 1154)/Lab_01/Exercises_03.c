// Write a C program that takes an integer number from user and reverses that number. 

#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the digits of the number
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}