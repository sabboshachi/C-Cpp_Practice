// Pointer Assignment

#include<stdio.h>
int main(){
    int i = 10;
    int *p, *q;
    
    p = &i;
    q = p;

    printf("%d %d", *p, *q); // print the values, the address contains

}

// Here p = q and *p = *q are not same
