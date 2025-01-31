#include<stdio.h>
#include<stdlib.h>
int fun(int, int);

int main(){
    int sum;
    sum = fun(3,4);
    printf("%d", sum);
    return 0;
}

// We need to link code01_Main.c and code02.c

// goto the directory and write this bash to create and exe file named my_program.exe 
// then run it from terminal .\my_program.exe

// cd path/to/your/directory
// gcc -o my_program main.c other.c
// .\my_program.exe (to run the code)
