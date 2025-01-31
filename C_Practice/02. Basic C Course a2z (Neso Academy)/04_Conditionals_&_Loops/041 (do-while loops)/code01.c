// Do While Loop

// Syntax 

// do
// {
//     /* code */
// } while ();

#include<stdio.h>
int main(){
    int i = 3;
    do
    {
        printf("i = %d\n",i); // before checking the condition first once the loop will be executed
        i--;
    } while (i > 0); // then the condition will be checked 
    
    return 0;
}