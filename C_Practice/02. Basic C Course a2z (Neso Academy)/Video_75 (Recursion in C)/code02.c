#include<stdio.h>
int fun(int n){
        if(n == 1){
            return 1;
        }
        else{
            return 1 + fun(n-1); // Here we are calling the function and also reducing its value and adding one to it
        }
}
int main(){
    int n = 3;
    printf("%d", fun(n)); 
    return 0;
}

// Here we need to understand the flow of function 
// fun(3) ---> return 1 + fun(2) ---> return 1 + fun(1) ---> return 1
//                                                              |
//  <--3             <--3                  <--2              <--1

// Output = 3