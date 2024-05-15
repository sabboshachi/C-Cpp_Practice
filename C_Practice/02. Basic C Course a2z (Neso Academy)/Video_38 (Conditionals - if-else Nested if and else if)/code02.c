#include<stdio.h>
int main(){

    int n = 5;
    if (n == 4)
    printf("Hello\n"); // only this statement will be executed if we don't use {}
    n++;   // then the post increment will happen
    printf("%d",n); // and so the present value of n is 5
    return 0;
}