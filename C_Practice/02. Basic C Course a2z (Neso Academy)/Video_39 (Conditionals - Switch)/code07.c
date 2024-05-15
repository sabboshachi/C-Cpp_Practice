// Switch Statement

#include<stdio.h>
#define y 2 // Macron can be used but not variables
int main(){
    int x = 2;

    switch(x){
        
        case 1: printf("x is 1");
        break;
        
        case y: printf("x is 2"); // here y use as a Macron
        break;
        
        case 3: printf("x is 3");
        break;

        default: printf("x has a value other than 1 2 3");
        break;

    }

    return 0;
}