// Compraing the Pointers 

#include<stdio.h>

int main(){
    int a[]= {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &a[1]; // 3
    int *q = &a[5]; // 87

    printf("%d ", *(p+3));
    printf("%d ", *(q-3));
    printf("%d ", p-q);
    printf("%d ", p<q);
    printf("%d ", *p>*q);

    return 0;
}

