// Write a program to print the following numbers in reverse order:

// 34 56 54 32 67 89 90 32 21

// Assume that tall these numbers are stored in an array.

#include<stdio.h>
# define N 9

int main(){
    int a[N] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    int i, x = 0;

    if(N%2!=0){
        for(i=0; i<=N/2; i++){
        x = a[i];
        a[i] = a[N-1-i];
        a[N-1-i] = x;
        x = 0;        
    }
    }else{
        for(i=0; i<N/2; i++){
        x = a[i];
        a[i] = a[N-1-i];
        a[N-1-i] = x;
        x = 0;        
    }
    }
    
    
    for(i=0; i<N; i++){
        printf("%d ", a[i]);
    }
}