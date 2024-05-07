#include<stdio.h>
int main(){

    int a = 5, b = 3;
    int incr;

    incr = (a>b) && (b++); // first condition is TRUE so second condition will be evaluated
// as second condition is an rvalue (expression) it also returns TRUE and so incr = 1
// "b" has a post increment sign so after the execusion of 'incr' the value of b in incresed which is 4
    printf("incr = %d\n",incr);
    printf("b = %d\n",b);

    return 0;
}