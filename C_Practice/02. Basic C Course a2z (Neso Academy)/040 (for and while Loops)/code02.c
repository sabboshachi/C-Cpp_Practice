// for loop

// Syntex

// for (initialization; condition; increment or decrement)
// {
//     statement
// }

// this is same code as we did in code01.c 
// just using the for loop


#include<stdio.h>
int main(){
    int a;
    for (a=3;a>0;a--)//(initialization; condition; decrement) 
    // first value of a will be initialized
    // then the condition will be checked
    // then printf function will work
    // then decrement will happen
    // then again condintion check 
    // then again printf will work
    // this will go on untill the condition is not filluped
    {
        printf("a = %d\n", a);
    }
    return 0;
}