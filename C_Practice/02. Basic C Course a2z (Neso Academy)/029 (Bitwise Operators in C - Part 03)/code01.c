#include<stdio.h>
int main(){

    char var =3;
    printf("%d", var >> 1);
    
    return 0;
}

// 0000 0011 = 3
// 1 Right Shift
// 0000 0001 = 1
// and so the output will be 1