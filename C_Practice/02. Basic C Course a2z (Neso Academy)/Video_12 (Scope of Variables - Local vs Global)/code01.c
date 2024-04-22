#include <stdio.h>

int main(){
    int var = 34;
    printf("%d", var);
    return 0;
}

int fun(){
    printf("%d", var);
    
    // [error: 'var' undeclared (first use in this function)]
}