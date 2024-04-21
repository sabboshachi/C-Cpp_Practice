// Problem 01: Write a C program to find the sum of marks of n students using array.

#include<stdio.h>

int main(){
    int marks[20],i,n,sum=0;
    printf("Enter number of sutdets : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter marks of student %d : ", i+1);
        scanf("%d",&marks[i]); 
        sum = sum + marks[i];
    }
    printf("Sum = %d",sum);
    return 0;
}