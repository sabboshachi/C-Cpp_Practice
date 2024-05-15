// What is the output of this program

#include<stdio.h>
int main(){
    int i = 0;
    for (printf("One\n"); i<3 && printf(""); i++) // due to initialization the printf will execute 
    // but in condition it represetes TRUE && FALSE which ultimately FALSE 
    // so the for loop will be terminated and the resule will be "One"
    {
        printf("Hi!");
    }
    return 0;
}