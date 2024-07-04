// Find the factorial of a number (say 5) using Recursion

// Step_01: Divide problems into smaller problems

// Fact(1) = 1

// Fact(2) = 2 * 1 
//         = 2 * Fact(1)

// Fact(3) = 3 * 2 * 1 
//         = 3 * Fact(2)

// Fact(4) = 4 * 3 * 2 * 1 
//         = 4 * Fact(3)

// Fact(5) = 5 * 4 * 3 * 2 * 1 
//         = 5 * Fact(4)

// Fact(n) = n * (n-1) * (n-2) * (n-3) * (n-4) 
//         = n * Fact(n-1) 
        // This is our Recursive Procedure

#include<stdio.h>

int fact(int n){
    if(n == 1){
        return 1; // Base case to stop the recursive procedure
    } 
    else{
        return n * fact(n-1); // Recursive Procedure
    }
}

int main(){
    int n, number;
    printf("Enter an integer number: ");
    scanf("%d",&number);
    n = number;
    number = fact(number);
    printf("The factorial of %d is %d", n, number);
}
