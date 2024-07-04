#include<stdio.h>
int main(){
    int a[5] = {1, 2, 5, 9, 6};
    const b[5] = {1, 2, 5, 9, 6};

    a[2] = 10; // This will change the index 2 value of the array
    b[2] = 100; // ERROR. As array b is a constant array 

    for(int i = 0; i<5; i++){
        printf("%d ", a[i]);
    }


}