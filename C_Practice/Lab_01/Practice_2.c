// Write a C program to check whether a number is palindrome or not.

#include <stdio.h>

int main(){
    int n, number, reminder, reverse=0;
    printf("Enter a number:");
    scanf("%d", &number);
    n = number;
    while (number != 0){
        reminder = number % 10;
        reverse = reverse*10 + reminder;
        number = number/10;
    }
    if (reverse == n){
        printf("%d is a palindrom number", reverse);
    }else{
        printf("%d is not a palindrom number", reverse);
    }
    return 0;
}

