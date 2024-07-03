#include<stdio.h>
int add(int, int); // function prototype

int main(){
    int m = 20, n = 30, sum;
    sum = add(m,n);
    printf("The sum of the two given number is: %d", sum);
}

// Definition of function
int add(int a, int b){ // here we need to declare the parameter type again
    return(a+b);
}