#include<stdio.h>

int main(){
    int a[]= {5, 1, 2, 3, 65, 87, 4, 5, 9, 6, 5, 45, 8, 7, 5, 4, 66};
    int *ptr; 
    ptr = &a[0];

    printf("%d \n", *ptr);
    printf("%d ", *(ptr+3)); // untill we use the star it won't access the value of the address 

}