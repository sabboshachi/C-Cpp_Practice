#include<stdio.h>
int *fun(int a[], int len);
int main(){
    int a[]= {5, 1, 2, 3, 65, 87, 4, 5, 9, 6, 5, 45, 8, 7, 5, 4, 66};
    int len = sizeof(a)/sizeof(a[0]);
    int *mid = fun(a , len);
    printf("Mid: %d", *mid);
}
int *fun(int a[], int len){ // function should be pointer as it return a pointer value 
    return &a[len/2];
}