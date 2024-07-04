// Never apply the dereference operator (*) to the uninitialized pointer

#include<stdio.h>
int main(){
    int *prt;
    printf("%d", *prt); // print the values the address contains

}

// Pointer must point to some object or variable. BUt here no object is found so ERROR will occur