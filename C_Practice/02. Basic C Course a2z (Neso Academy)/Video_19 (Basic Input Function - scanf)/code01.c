#include<stdio.h>
int main(){
    int a; // declaring a variable and creating a space in memory 
    printf("Enter a value: ");
    scanf("%d", &a); // & indicates the location of the memory of the variable

    printf("The value of 'a' is %d", a); 
}