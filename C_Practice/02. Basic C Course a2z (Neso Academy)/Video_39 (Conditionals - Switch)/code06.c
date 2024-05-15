// Switch Statement

#include<stdio.h>
int main(){
    int x = 2;
    int y = 2;
    int x = 5;

    switch(x){
        
        case y: printf("x is 1"); // can't use variable in casa statement 
        break;
        
        case 2: printf("x is 2");
        break;
        
        case z: printf("x is 3");
        break;

        default: printf("x has a value other than 1 2 3");
        break;

    }

    return 0;
}