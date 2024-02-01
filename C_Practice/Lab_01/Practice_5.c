//Write a C Program to Find Greatest Common Divisor of two integer values.

#include <stdio.h>

int main(){
    int n1,n2,i;
    
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    printf("The HCF of %d and %d is/are: ", n1, n2);
    
    for(i=2;i<=n1||i<=n2;i++){
            if(n1%i == 0 && n2%i == 0){
                printf(" %d ",i);
            }
        }
    
    return 0;
}