#include<stdio.h>
int main(){
    int year = 2024;
    if (year % 400 == 0){ // It any year divisible by 400 it is a Leap Year.
        printf("%d is a leap year.", year);
    } // if not divisible with 400 then
    else if (year % 100 == 0){ // if divisible by 100 then it is not a Leap Year.
        printf("%d is not a leap year.", year);
    }
    else if (year % 4 == 0){ // Ifthe year is neither divisible by 400 nor 100 but divisilbe by 4 then
        printf("%d is a leap year.", year);// it is a leap year.
    }
    else{
        printf("%d is not a leap year.", year); // if no condition is satisfied, it is not a leap year. 
    }
    return 0;
}

// Another way to calculate the leap year using conditional gate

    // if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    //     return 1; // Leap year
    // else
    //     return 0; // Not a leap year