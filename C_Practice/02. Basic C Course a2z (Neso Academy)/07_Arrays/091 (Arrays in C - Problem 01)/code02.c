// Write a program to print the following numbers in reverse order:

// 34 56 54 32 67 89 90 32 21

// Assume that tall these numbers are stored in an array.

#include<stdio.h>
# define N 9

int main(){
    int a[N] = {34, 56, 54, 32, 67, 89, 90, 32};
    int i;

    printf("Original list: ");
    
    for(i=0; i<N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Reversed list: ");

    for(i=N-1; i>=0; i--){
        printf("%d ", a[i]);
    }
}