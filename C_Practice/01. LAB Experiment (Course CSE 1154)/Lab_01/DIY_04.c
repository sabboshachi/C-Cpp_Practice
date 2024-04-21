// Write a C program to display factorial of an integer if user enters non-negative integer. 

#include <stdio.h>
int main(){
    int n, number, factor=1;
    printf("Enter a number positive number : ");
    scanf("%d", &number);
    n = number;
    if (number > 0){
        while (number > 0){
        factor = factor * number;
        number--; 
        }
        printf("The factorial of %d is %d", n, factor);
    }else{
        printf("ERROR, enter a positive number.");
    }
    return 0;
}