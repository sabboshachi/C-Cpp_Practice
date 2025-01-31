#include<stdio.h>
int main(){
    int a[5];
    *a = 10; // here we are assigning 10 to the fisrt index of the array
    *(a+1) = 12; // assigning 12 to the second index of the array
    printf("%d ",a[0]); 
    printf("%d ",a[1]);
    return 0;
}