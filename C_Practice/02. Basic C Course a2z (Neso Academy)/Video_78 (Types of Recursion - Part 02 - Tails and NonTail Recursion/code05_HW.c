#include<stdio.h>
void fun(int n){
    if (n <= 0){
        return;
    }
    printf("%d", n); 
    fun(2*n); 
    printf("%d", n); // work left after calling the fuction so it is a non-tail recursion
}

int main(){
    fun(4);
    return 0;
}

// int overflow even when the output is 1(the smallest positive number) 
// the recursion can run only upto 32 times because an int is 4 bytes which is 32 bits...
// At n=1 the first bit is set and when n=2 second bit is set and so on... 
// When it reaches the 32nd bit n is no longer a positive number and the program returns.

// Basically, Singed Variable Concept
// When limit exits goes to negative value and if condition applied 