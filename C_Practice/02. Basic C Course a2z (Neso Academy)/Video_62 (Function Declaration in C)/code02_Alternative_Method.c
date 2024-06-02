#include<stdio.h>
char fun(){ // here as we are calling the function before the main() function we don't need to declare the function
    return 'A';
}
int main(void){
    char c = fun();
    printf("The charecter is %c", c);
}

// but it is always good practice to use / declare the function