#include<stdio.h>
int main(){

    int a = 4, b = 3;
    printf("%d\n", a+++b);

    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}

// Here a+++b = a++ + b
// Post increment of a
// so first the summuation will execute with initial value of a
// then the value of a will increase which is 5