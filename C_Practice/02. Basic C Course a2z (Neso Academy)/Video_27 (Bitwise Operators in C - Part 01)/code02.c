// Bitwise OR
#include<stdio.h>
int main(){

    char x = 1, y = 2;
    if (x|y){
        printf("The result of x|y is 1 \n");
    }
    if (x||y){
        printf("The result of x||y is 1");
    }
    return 0;
}

// for bitwise OR 
// x|y = 1|2
// 1 = 0000 0001
// 2 = 0000 0010
// 1|2 = 0000 0011 = 3 (Anything other than Zero is considered as TRUE)
// as the result is TRUE it will return both the lines  
// and so both of the printf fucntion worked