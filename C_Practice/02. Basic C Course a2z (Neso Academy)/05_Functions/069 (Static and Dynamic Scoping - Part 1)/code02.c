#include<stdio.h>
int fun1(int);
int main(){
    int a = 10;
    a = fun1(a);
    printf("a = %d",a);
}

int fun1(int a){
    int b = 5;
    b = b + 5;
    return b;
}

// Stack works as Last In First Out (LIFO)
// So the memory allocation will be as

// 2. fun1()
// 1. main()