#include<stdio.h>
int main(){
    int a = 0, b = 1, n = 10, result;
    for (int i = 1; i <= n; i++){
        printf("%d + ", a);
        result = a+b;
        a = b;
        b = result;
        // if (i == n)
        // printf("%d", a);
    }
    return 0;
}