#include <stdio.h>

int main(){

    unsigned i = 1;
    int j = -4;

    printf("%d\n", i+j);
    printf("%u", i+j);

    // This line is calling the printf function to output the value of the expression i + j as an unsigned integer 
    // (%u indicates that the value should be formatted as an unsigned integer). 
    // The expression i + j adds the value of variable i (which is an unsigned integer with a value of 1) 
    // to the value of variable j (which is a signed integer with a value of -4).

    return 0;
}