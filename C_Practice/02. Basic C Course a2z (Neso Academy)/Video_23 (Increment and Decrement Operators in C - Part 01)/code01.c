#include<stdio.h>
int main(){
    int a,b,x = 5 , y = 5;

    printf("x = %d\n",x); // Initiaized Value of x
    printf("y = %d\n",y); // Initiaized Value of y

    a = x++;
    b = ++y;
    
    printf("a = %d\n",a); // Post-increment means first assign then increment
    printf("b = %d\n",b); // Pre-increment means first increment then assign
    
    printf("New x = %d\n",x); // Value after operation
    printf("New y = %d\n",y); // Value after operation

    return 0;

}