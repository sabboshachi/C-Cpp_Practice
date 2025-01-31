#include<stdio.h>
int main(){
    char var = 65;
    char var2 = 'N'; // Here we must use single quote 
    printf("From 65: %c\n", var);
    printf("From 65 but %%d: %d\n", var);
    printf("From N: %c", var2);
    return 0;
}