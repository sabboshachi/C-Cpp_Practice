#include<stdio.h>
int main(){
    int number=444, q, reminder, result=0;
    q = number;
    while(q!=0){
        reminder = q%10;
        result = result*10 + reminder;
        q /= 10;
    }
    if (result == number){
        printf("The number is Palindrome .");
    }else{
        printf("The number is not Palindrome .");
    }





    return 0;
}