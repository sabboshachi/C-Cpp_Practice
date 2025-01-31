// Reversing a Series of Numbers using Pointers

#include<stdio.h>
int main(){
    int a[] = {11,22,36,5,2};
    int sum=0, *p, len;

    len = (sizeof(a)/sizeof(a[0]));

    for(p=(a+(len-1));p>=a;p--){ //Name of a array can be used as a pointer to the first element of an array.
        printf("%d ", *p);
    }
    
}