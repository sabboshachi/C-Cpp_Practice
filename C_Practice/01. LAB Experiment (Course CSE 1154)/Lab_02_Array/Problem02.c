// Problem 02: Write a C program to find the average of marks of n students using array.

#include<stdio.h>

int main(){

    int marks[20],i,n,sum=0,avg;
    printf("Enter number of sutdets: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter marks of student %d : ", i+1);
        scanf("%d",&marks[i]); 
        sum = sum + marks[i];
    }
    avg = sum/n;
    printf("Average = %d",avg);
    return 0;
}