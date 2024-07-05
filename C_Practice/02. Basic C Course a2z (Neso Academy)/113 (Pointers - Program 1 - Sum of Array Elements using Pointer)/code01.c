// Sum of elements of array

#include<stdio.h>

int main(){
    int a[] = {1,2,23,5,77};
    int sum = 0, *p;

    for(p=&a[0]; p<=&a[4]; p++){
        sum += *p;
    }
    printf("%d ", sum);
}