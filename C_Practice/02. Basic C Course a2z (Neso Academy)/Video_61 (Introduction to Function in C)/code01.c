#include<stdio.h>

// declaring a function that dose the main work
int areaOfRect(int length, int breadth){
    int area;
    area = length * breadth;
    return area; // the fucntion will return the value of the area after multiplication
}
// declaring main function
int main(){
    int l = 100, b = 5;
    int area = areaOfRect(l,b); // here the function is simply replaced by the value of area retured from the upper function
    printf("The Area of Rectangle is : %d", area); 
}