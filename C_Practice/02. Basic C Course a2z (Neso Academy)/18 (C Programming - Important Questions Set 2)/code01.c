#include<stdio.h>
int main(){
    int var = 052;
    printf("%d\n", var);
    printf("%o", var);
    return 0;
}

// Here the output won't be 52 but 42
// as we put a 0 in fornt of the number 52
// compiler consider 052 as octal number 
// so it conver the octal number to the decimal number then print it 

// if we use %o instade of %d 
// 52 will be printed