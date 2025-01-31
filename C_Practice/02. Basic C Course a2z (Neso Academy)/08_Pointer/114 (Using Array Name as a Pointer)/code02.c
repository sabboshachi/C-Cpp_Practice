#include<stdio.h>
int main(){
    int a[] = {11,22,36,5,2};
    int sum=0, *p;

    for(p=&a[0]; p<&a[5];p++){
        sum = sum + *p;
    }

    printf("Sum is %d", sum);
}