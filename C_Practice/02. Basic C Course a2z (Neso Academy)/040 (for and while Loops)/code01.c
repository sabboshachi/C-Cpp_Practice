// while loop

// syntex

// while (expression){
//     statement 1;
//     statement 2;
//     statement 3;
//     ... ... ...
//     ... ... ...
// }

#include<stdio.h>
int main(){
    int i = 3; 
    while (i>0){ //check the while condition
        printf("i = %d\n", i); // if the condition satisfied execute the function
        i--; // post decrement the value of i then again go to while and check the condition
    } // if condition don't satisfy, end the loop
    return 0;
}