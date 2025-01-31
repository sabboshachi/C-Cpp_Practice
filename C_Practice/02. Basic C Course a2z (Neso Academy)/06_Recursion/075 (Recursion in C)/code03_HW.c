#include<stdio.h>
int fun(int n){
        if(n == 0){
            return 1;
        }
        else{
            return 7 + fun(n-2); // Here we are calling the function and also reducing its value and adding one to it
        }
}
int main(){
    int n = 4;
    printf("%d", fun(n)); 
    return 0;
}

// Here we need to understand the flow of function 
// fun(4) ---> return 7 + fun(2) ---> return 7 + fun(0) ---> return 1
//                                                              |
//  <--15             <--15                  <--8              <--1

// Output = 15