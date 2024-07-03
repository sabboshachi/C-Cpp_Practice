#include<stdio.h>
int main(){
    float x = 2.5, y = 3; // cannot use float value it switch statement 
    // only integer value can be used 

    switch(x+y){
        
        case 1: printf("x is 1");
        break;
        
        case 2: printf("x is 2");
        break;
        
        case 5: printf("x is 3");
        break;

        default: printf("x has a value other than 1 2 3");
        break;

    }

    return 0;
}