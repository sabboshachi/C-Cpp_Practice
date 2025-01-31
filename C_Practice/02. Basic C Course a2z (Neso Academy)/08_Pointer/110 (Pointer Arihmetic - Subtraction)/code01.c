#include<stdio.h>

int main(){
    int a[]= {5, 1, 2, 3, 65, 87, 4, 5, 9, 6, 5, 45, 8, 7, 5, 4, 66};
    int *ptr; 
    ptr = &a[5];

    printf("%d \n", *ptr);
    printf("%d \n", *(ptr-3)); // 3 step backward in the array
    printf("%d \n", *(ptr-7)); // it wii create some unknown values coz we exit the range of the array

}