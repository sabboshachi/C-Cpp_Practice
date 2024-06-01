#include<stdio.h>
int main(){
    unsigned int var1 = 0; // min value of unsigned data
    unsigned int var2 = 4294967295; // max value of unsigned data
    int var3 = -2147483648; // min value of signed data
    int var4 = 2147483647; // max value of signed data

    printf("%u\n", var1-1); // 4294967295
    printf("%u\n", var2+1); // 0

    printf("%d\n", var3-1); // 2147483647
    printf("%d\n", var4+1); // -2147483648


    return 0;
}