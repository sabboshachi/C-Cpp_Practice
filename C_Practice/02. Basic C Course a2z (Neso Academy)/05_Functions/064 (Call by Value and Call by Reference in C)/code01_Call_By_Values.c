#include<stdio.h>
int fun(int, int); // function prototype

int main(){
    int x = 20, y = 10;
    fun(x,y);
    printf("The value of x in main is %d \n", x);
    printf("The value of y in main is %d\n", y);
}

// The value of x and y changes only inside the funciton
// outside this function the value of this function is not changed
int fun(int x, int y){
    x = 50;
    y = 60;
    printf("The value of x in local is %d \n", x);
    printf("The value of y in loacl is %d\n", y);
}

// Call By Value
// Here values of actual parameters will be copied to foral parameters 
// and these two different parameters store values in different location