// Switch Statement

#include<stdio.h>
int main(){
    int x = 6;

    switch(x){

        default: printf("x has a value other than 1 2 3"); // default don't necessarily needs to be used in the last
        // it can be used anywhere in and still will be executed
        break;
        
        case 1: printf("x is 1");
        break;
        
        case 2: printf("x is 2");
        break;
        
        case 3: printf("x is 3");
        break;

    }

    return 0;
}