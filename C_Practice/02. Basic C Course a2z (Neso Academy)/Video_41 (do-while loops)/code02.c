// Write a program that allows user to enter an integer until he enters a value zero
#include<stdio.h>
int main(){
    int a;
    do
    {
        printf("Enter an Integer:\n");
        scanf("%d",&a);
    } while (a != 0);

    printf("You are out of the loop as you entered Zero!");    

    return 0;
}


// if we write same code using while loop

#include<stdio.h>
int main(){
    int a;
    printf("Enter an Integer:\n");
    scanf("%d",&a);
    while (a != 0)
    {
        printf("Enter an Integer:\n");
        scanf("%d",&a);
    }
    printf("You are out of the loop as you entered Zero!");
    
    return 0;
}