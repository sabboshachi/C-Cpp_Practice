// Bitwise AND
#include<stdio.h>
int main(){

    char x = 1, y = 2;
    if (x&y){
        printf("The result of x&y is 1");
    }
    if (x&&y){
        printf("The result of x&&y is 1");
    }
    return 0;
}

// for bitwise AND 
// x&y = 1&2
// 1 = 0000 0001
// 2 = 0000 0010
// 1&2 = 0000 0000 = 0 (FALSE)
// as the result is false it won't return anything 
// and so the first printf function did not work