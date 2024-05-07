// Bitwise NOT
#include<stdio.h>
int main(){

    char x = 7;
    printf("%d", ~x);
    return 0;
}

// for bitwise NOT 
// 2 = 0000 0010
// ~2 = 1111 1101 
// as the result is false it won't return anything 
// and so the first printf function did not work