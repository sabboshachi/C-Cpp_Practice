//Homework

#include<stdio.h>
int main(){

    int i = 1;
    int *p, *q;
    p = &i;

    q = p; // Here Important thing to notice we are not creating or copying another variable but copying its address 
    // so if we change any value to that address the value contained by the address will be changed 

    *q = 5;
    
    printf("%d", *p);

    return 0;
}

// Output: 5