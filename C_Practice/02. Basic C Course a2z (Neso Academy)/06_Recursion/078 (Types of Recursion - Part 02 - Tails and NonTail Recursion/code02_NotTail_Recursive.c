// A recursive function is said to be non-tail recursive if the recursive call is not 
// the last thing done by the function. After returning back, there is some operation left to evaluate.

#include<stdio.h>
void fun(int n){
    if (n == 0){
        return;
    }
    fun(n-1); // Calling the function 
    printf("%d",n); // Operation left after calling the function that will be done while returning value
}

int main(){
    fun(3);
    return 0;
}

// fun(3) --> [don't satisfy if condition] go to fun(3-1) [printf left]
// fun(2) --> [don't satisfy if condition] go to fun(2-1) [printf left]
// fun(1) --> [don't satisfy if condition] go to fun(1-1) [printf left]
// fun(0) --> [go to if condition] + return Null back to fun(1)

// fun(1) print n=1 return to fun(2)
// fun(2) print n=2 return to fun(3)
// fun(3) print n=3 return to main() return 0;

// Output: 1 2 3