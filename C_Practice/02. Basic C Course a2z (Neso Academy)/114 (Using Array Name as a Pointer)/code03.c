#include<stdio.h>
int main(){
    int a[] = {11,22,36,5,2};
    int sum=0, *p;

    for(p=a; p<(a+5);p++){ //Name of a array can be used as a pointer to the first element of an array.
        sum = sum + *p;
    }

    printf("Sum is %d", sum);
}