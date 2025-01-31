#include<stdio.h>
#include<math.h>

int main(){
    int number = 23, x, var1, var2, count = 0;
    // printf("Enter a Number: ");
    // scanf("%d", &number);

    // Step 01: Find the Square Root of the Number
    x = number;
    var1 = ceil(sqrt(x));

    // Step 02: 
    var2 = number;
    for(int i=2; i<=var1; i++){
        if (var2 % i == 0)
        count = 1;
    }

    // Step 03:
    if ((count == 0 && number != 1) || number == 2 || number == 3) // Here we check if the number is 1, 2 or 3
    printf("The Number is a prime number.");
    else
    printf("The number is not a prime number.");

    return 0;
}