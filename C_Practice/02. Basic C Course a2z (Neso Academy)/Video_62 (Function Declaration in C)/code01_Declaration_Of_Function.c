#include<stdio.h>
char fun(); // decalration of function without any parameter

int main(){
    char c = fun(); // when compiler read this line it jumps to the function line
    printf("The charecter is %c", c);
}

char fun(){
    return 'A'; // the function return the charecter A
}
