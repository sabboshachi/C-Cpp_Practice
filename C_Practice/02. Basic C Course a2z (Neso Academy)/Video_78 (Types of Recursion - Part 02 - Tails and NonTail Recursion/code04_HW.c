#include<stdio.h>
void fun(int n){
    if (n == 0){
        return;
    }
    fun(n/2);
    printf("%d", n%2); // work left after calling the fuction so it is a non-tail recursion
}

int main(){
    fun(4);
    return 0;
}

// Output: 100