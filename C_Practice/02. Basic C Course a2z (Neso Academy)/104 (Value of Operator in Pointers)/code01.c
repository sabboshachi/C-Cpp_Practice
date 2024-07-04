// Value of Operator / Dereference operator / Indirection operator (*)

#include<stdio.h>
int main(){
    int x = 10;
    int *prt = &x; // Storing the address of the variable x
    // adding * means go to the x's address and get the value it carry

    printf("%d", *prt); // print the value,s the address contains

}