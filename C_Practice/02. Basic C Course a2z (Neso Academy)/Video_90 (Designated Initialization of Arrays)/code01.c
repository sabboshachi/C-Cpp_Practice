#include<stdio.h>
#define N 5

int main(){
    int a[5] = {5,6,[2]=10,4,8}; // [2] = 2 is designated array where value 10 is designated to position [2]

    // print values of array
    for(int i=0; i<N; i++){
        printf("%d ", a[i]);
    }
}