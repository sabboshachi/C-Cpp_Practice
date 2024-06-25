// Write a program to check whether any of the digits in a number appears more than once.
// Example: 
// Input: 67827
// Output: Yes

#include<stdio.h>
int main(){
    int number = 67827,reminder = 0;
    
    int a[10] = {0};
    // here we will target the index number, not the value
    // after getting each remider replace the value of the array[reminder] = 1

    while (number>0)
    {
        reminder = number % 10;
        if(a[reminder] == 1){ // if we previously got 1 on that index, break the loop
            break;
        }
        a[reminder] = 1;
        number = number / 10;
    }
    if(number > 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
