#include<stdio.h>
int main(){
    int x = 2, y = 3; 
  

    switch(x+y){
        
        case 1: printf("x is 1");
        break;
        
        case 2: printf("x is 2");
        break;
        
        case 5.5: printf("x is 3"); // cannot use float value it case statement 
        // only integer value can be used 
        break;

        default: printf("x has a value other than 1 2 3");
        break;

    }

    return 0;
}