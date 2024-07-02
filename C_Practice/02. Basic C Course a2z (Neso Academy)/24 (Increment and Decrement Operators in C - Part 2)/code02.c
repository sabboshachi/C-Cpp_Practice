#include<stdio.h>
int main(){

    int a = 4, b = 3;
    printf("%d\n", a + ++b);

    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}

// Here a + ++b
// Pre-increment of b
// so first the value of b will increase then the summuation will execute
// the value of "b" will increase which is 4