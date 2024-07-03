#include<stdio.h> 
int var; 
int main(){ 
    int var = (printf("%s\n", "Hello!"), 5); 
    printf("%d", var);
}

// FIrst Evaluation then Rejection