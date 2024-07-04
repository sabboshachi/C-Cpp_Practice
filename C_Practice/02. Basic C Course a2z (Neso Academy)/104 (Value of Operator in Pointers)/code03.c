// Assigning value to an uninitialized pointer in dengerous

#include<stdio.h>
int main(){
    int *prt;
    *prt = 1;
    printf("%d", *prt); // print the values the address contains

}

// ERROR: Segmentation fault