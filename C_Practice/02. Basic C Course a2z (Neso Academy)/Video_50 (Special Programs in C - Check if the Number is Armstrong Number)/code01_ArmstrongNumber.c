#include<stdio.h>
int main(){
    int number = 371, count = 0, q, cnt, results = 0, mul = 1, reminder;

    // Step 01: Find out how many digits are there in your number
    q = number;
    while (q != 0)
    {
        q = q/10;
        count++;
    }
    //printf("Number of Digits = %d\n", count);
    //printf("q = %d\n", q);

    // Multiply each digits n times and add them
    cnt = count;
    q = number;
    while(q != 0){
        reminder = q % 10;
        while (cnt != 0){
            mul = mul * reminder;
            cnt--;
        }
        results = results + mul;
        mul = 1;
        q /= 10;
        cnt = count;
    } 
    //printf("Resutls: %d\n", results);
    
    // Check the number with results
    if (results == number)
        printf("The given number is an Armstrong Number.");
    else 
        printf("The given number is not an Armstrong Number.");
    return 0;
}