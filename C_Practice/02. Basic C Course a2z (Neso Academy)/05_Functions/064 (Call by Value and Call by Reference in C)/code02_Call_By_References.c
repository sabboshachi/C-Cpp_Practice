#include<stdio.h>
int fun(); // function prototype

int main(){
    int x = 600, y = 500;
    fun(&x, &y); // passing the addres of the variable through the function
    printf("The value of x in main is %d \n", x);
    printf("The value of y in main is %d\n", y);
}

int fun(int *ptr1, int *ptr2){ // jumping from line 6 to this line
// we need a special variable to hold the address of which is pointer
// let the location of x = 1000 and y = 2000
// so &x = 1000 , &y = 2000
// *prt1 gets 1000
// *ptr2 gets 2000
    *ptr1 = 20; // this line says go to location 1000 and acces its value change it 20
    *ptr2 = 10; // this line says go to location 2000 and acces its value change it 10
// and so the value of actual x , y is changed 
}

// Call By Reference
// Here both actual and formal parameters refers to same memory location. Therefore, any changes
// made to the formal parameters will get reflected to actual parameters.

// Here instade of passing values, we pass addresses
