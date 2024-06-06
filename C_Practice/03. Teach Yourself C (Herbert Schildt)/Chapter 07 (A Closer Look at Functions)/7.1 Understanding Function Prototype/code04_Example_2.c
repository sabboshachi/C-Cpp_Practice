// If a function is defined before it is called, it doesn't require a separate prototype.

#include<stdio.h>

// define getnum() function prior to its first use
float getnum(void){
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    return x;
}

// main function
int main(){
    float i;
    i = getnum();
    printf("The Value of x is: %f", i);
    return 0;
}

// Here function is defined before it is used, the compiler knows what type of data it returns
// and that it has no parameters. A seperate prototype is not needed.
// The reason that we will seldom use this methond is that, large programs are typically spread across several files.
// Since we can't define a function more that once, prototype are the only way to inform all files about functions.