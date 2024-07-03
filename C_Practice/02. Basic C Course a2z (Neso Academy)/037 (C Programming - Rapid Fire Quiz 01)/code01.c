// Proble 08

#include<stdio.h> 
int var = 5; 
int main(){ 
    int var = var; 
    printf("%d", var); // This will produce garbadge values
}

// As here already the variable is globally declared and initialized 
// if we again try to initialize it in a local sapace 
// thorugh the value of the variable it will produce garbage value