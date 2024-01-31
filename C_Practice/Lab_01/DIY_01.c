// Write a C program to find and display all the factors of a number entered by an user. 

#include <stdio.h>
int main(){
    int number, factor=1;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0){
        factor = factor * number;
        number--; 
    }
    printf("The sum is %d", factor);
    return 0;
}