// Compraing the Pointers 

#include<stdio.h>

int main(){
    int a[]= {5, 1, 2, 3, 65, 87, 4, 5, 9, 6, 5, 45, 8, 7, 5, 4, 66};
    int *p = &a[3]; // 3
    int *q = &a[5]; // 87

    printf("%d \n", p <= q);
    printf("%d \n", p >= q);

    p = q;

    printf("%d \n", p == q);

    return 0;
}

