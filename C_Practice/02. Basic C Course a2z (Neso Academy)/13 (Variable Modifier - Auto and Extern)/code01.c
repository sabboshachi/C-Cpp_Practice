#include<stdio.h>
int main(){

    int var; // here if we don't initialize any value for the variable it will take some random garbage value 
    // here we are just declaring the variable type and allocating a memory for it.

    auto int var2; // this will give similler type of output as "int var;"

    printf("%d\n", var);
    printf("%d", var2);

    return 0;
}


// In C, both `int var;` and `auto int var;` declare a variable named `var` of type `int`. 
// The keyword `auto` in C is optional when declaring variables within a function, and its presence or 
// absence does not affect the behavior or the type of the variable.

// Historically, `auto` was used to declare local variables within a function. 
// However, since C automatically treats variables declared within a function as "auto" 
// by default, explicitly using `auto` is redundant and uncommon in modern C programming. 

// So, in practical terms, there's no difference between `int var;` and `auto int var;`. 
// Both declare an integer variable named `var`, and in modern C programming, `auto` is typically omitted.