// C programming only follows Static Spocing 

#include<stdio.h>
int x = 50;

int fun2(){
    return x;
}

int fun1(){
    // x = 10 if we do this answer will be 10 as the global value of x will be changed
    int x = 10;
    int y = fun2();
    return y;
}

int main(){
    printf("%d", fun1());
}