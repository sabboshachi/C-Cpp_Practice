#include<stdio.h>
int main(){
    int x = 2;

    switch(x){
        
        case 1: printf("x is 1");
        break;
        
        case 1: printf("x is 1"); // if we use duplicate case it will produce ERROR
        break;
        
        case 3: printf("x is 3");
        break;

        default: printf("x has a value other than 1 2 3");
        break;

    }

    return 0;
}