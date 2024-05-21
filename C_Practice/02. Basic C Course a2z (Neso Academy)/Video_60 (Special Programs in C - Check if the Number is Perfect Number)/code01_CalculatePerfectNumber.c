#include<stdio.h>
int main(){
    int number = 33550336, i, sum = 0, rem;
    for (i = 1; i<number ; i++){
        rem = number % i;
        if (rem == 0){
            sum = sum + i;
        }
    }
    if (sum == number){
        printf("%d is a Perfect Number.", number);
    }else{
        printf("%d is NOT a Perfect Number.", number);
    }
    return 0;
}