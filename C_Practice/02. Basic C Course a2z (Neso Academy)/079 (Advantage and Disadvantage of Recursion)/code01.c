// Advantage of Recursion

// 1. Simplicity: Simpler and Easier to Understand
// 2. Elegance: Provide a more natural solution for problems that have structures such as tree traversal

// *** Every recursive program can be modeled into an iterative program but recursive 
// program are more elegant and requires related less line of code. *** 

// Factorial of Number

// ### Iterative Process ###

#include<stdio.h>

int fact(int n){
    int res = 1;
    while (n!=0)
    {
        res = res*n;
        n--;
    }
    return res;
}
int main(){
    printf("%d", fact(5));
    return;
}

// ### Recursive Process ###

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    printf("%d",fact(5));
    return 0;
}

// Here we can see both code does the same work but in recursion it requires less line of code 
// and easier to understand