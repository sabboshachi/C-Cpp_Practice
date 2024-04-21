// Write a C program to check whether a number is prime or not. 

#include <stdio.h>

int main(){
    int n, i, flag=0;
    printf("Enter a nunber:");
    scanf("%d", &n);

    for (i=2; i<=n/2; i++){ // number from 2 to n/2 should be applied that reduces iteration number
        if(n%i==0){
            flag = 1; // using flag to indicate stop or not
            break; // braking the loop
        }
    }
    if (flag==0){
        printf("%d is a prime number.", n);
    }else{
        printf("%d is not a prime number.",n);
    }
    return 0;
}