#include<stdio.h>
int main(){
    int sum, carry, a = 20 , b = 10;
    while(b!=0){
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    printf("Sum = %d", sum);
    return 0;
}