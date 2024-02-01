// Write a c program to display Fibonacci series up to certain number entered by user.

#include <stdio.h>
int main(){
    int n1=0,n2=1,n3,number=100;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("%d + %d + ", n1,n2);
    while(n1 + n2 <number){
        n3 = n1 + n2;
        printf("%d + ", n1 + n2);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}