#include<stdio.h>
#define N 5

int main(){
    int a[5] = {5,6,[1]=10,4,8}; // if designated place and random cross over happes, designator wins
    // measn 6 will be replace by 10

    // print values of array
    for(int i=0; i<N; i++){
        printf("%d ", a[i]);
    }
}