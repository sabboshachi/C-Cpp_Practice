#include<stdio.h>
int main(){

    int a = 5, b = 3;
    int incr;

    incr = (a>b) || (b++); // first condition is TRUE so incr = 1 and second condition won't be evaluated beasue it already got a TRUE value
// and so b won't increase and remain 3
    printf("incr = %d\n",incr);
    printf("b = %d\n",b);

    return 0;
}

// Short Circuit in case of || :
// If there is a condition anywhere in the expression that returns TRUE,
// then the rest of the conditions after that will not be evaluated.