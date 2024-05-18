#include<stdio.h>
int main(){
    int number = 145, n, result = 0, factorial = 1, reminder;
    n = number;
    while (n != 0)
    {
        reminder = n % 10;
        while (reminder >= 1){
            factorial = factorial*reminder;
            reminder--;
        }
        result = result + factorial;
        n = n/10;
        factorial = 1;
    }
    if (result == number)
        printf("Number is a Strong Number!");

    else
        printf("The number is not a Strong Number ");
    



    return 0;

}