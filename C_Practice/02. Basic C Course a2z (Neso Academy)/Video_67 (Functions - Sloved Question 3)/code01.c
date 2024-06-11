#include<stdio.h>
int fun(){
    static int num = 16;
    return num--;
}

int main(){
    for(fun();fun();fun())
    printf("%d ",fun());
    return 0;
}
// every time the function is called
// whole function will run means decrement will happen