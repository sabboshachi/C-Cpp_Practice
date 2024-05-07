#include<stdio.h>

int main(){
    static int i = 0x43FF; // Hexa Decimal print
    printf("%x\n",i);
    printf("%X",i);
    return 0;
}