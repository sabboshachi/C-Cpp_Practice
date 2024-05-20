#include<stdio.h>
int main(){

    int binary = 1010, weight = 1, decimal = 0, rem;

    // printf("Enter a binary number:");
    // scanf("%d", &binary);

    while(binary != 0){
        rem = binary % 10; // taking the list digit as reminder
        decimal = decimal + rem*weight; // digit*weight 
        weight = weight*2; // increase weight by 2x as binary contain 2
        binary = binary / 10; 
    }
    printf("%d", decimal);
    return 0;
}