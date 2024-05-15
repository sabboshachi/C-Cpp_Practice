// How many time hello world will be printed?
#include<stdio.h>
int main(){
    int i = 1024;
    for(;i; i>>=1){
        printf("Hello World!\n");
    }
    return 0;
}

// i = 1024 = 00000100 00000000 = HW_1
// i = 512 = 00000010 00000000 = HW_2
// i = 256 = 00000001 00000000 = HW_3
// i = 128 = 0000000 10000000 = HW_4
// i = 64 = 00000100 01000000 = HW_5
// i = 32 = 00000100 00100000 = HW_6
// i = 16 = 00000100 00010000 = HW_7
// i = 8 = 00000100 00001000 = HW_8
// i = 4 = 00000100 00000100 = HW_9
// i = 2 = 00000100 00000010 = HW_10
// i = 1 = 00000100 00000001 = HW_11
// i = 0 = 00000100 00000000 
// As i becomes zero so the condition in for loop will be FALSE and so the loop will be terminated
// and thus the final result is 
// Hello World is printed 11 times