// Write a program to find the sum of first n natural numbers (1, 2, 3... are called natural numbers) where n is entered by user.

#include <stdio.h>
int main(){
    int number, sum=0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number >= 0){
        sum = sum + number;
        number--; 
    }
    printf("The sum is %d", sum);
    return 0;
}