// A recursive function is said to be tail recursive if the recursive call is the last thing
// done by the function. There is no need to keep record to the previous state.

#include<stdio.h>

void fun(int n){
    if(n==0){
        return;
    }
    else{
        printf("%d",n);
    }
    return fun(n-1); // no operation left after the return call
    // calling function is the last thing here
}

int main(){
    fun(3);
    return 0;
}

// fun(3) --> [go to else condition and print 3] + return 2
// fun(2) --> [go to else condition and print 2] + return 1
// fun(1) --> [go to else condition and print 1] + return 0
// fun(0) --> [go to if condition] + return NULL
// not operation left so back to 
// fun(1) --> fun(2) --> fun(3)[main] 

// Output: 3 2 1