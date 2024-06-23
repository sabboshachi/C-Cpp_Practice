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

// *** Here the stack only have 2 functions in memory ***

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

// *** Here in the stack memory there are 6 functions ***
// fact(1)
// fact(2)
// fact(3)
// fact(4)
// fact(5)
// main() 
