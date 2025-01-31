#include<stdio.h>

int main(){
    int a[]= {5, 1, 2, 3, 65, 87, 4, 5, 9, 6, 5, 45, 8, 7, 5, 4, 66};
    int *ptr; 
    ptr = &a[5];

    printf("%d \n", *++ptr);
    printf("%d \n", *ptr);
}

// First increment then print