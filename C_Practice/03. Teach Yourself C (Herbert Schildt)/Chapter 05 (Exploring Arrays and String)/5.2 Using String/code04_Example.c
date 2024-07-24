// One common use of strings is to support a command-based interface. Unlike a menu. which allows the user to make a 
// selection, a command-based interface displays a prompting message , waits for the user to enter a command, and then does 
// what the command requests. Many operating systems, such as Windows or DOS, support command-line interfaces, for example. 
// The following program is similar to a program developed in Section 3.1. 
// It allows the user to add, subtract, multiply, or divide, but does not use a menu. Instead, it uses a command-based interface.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char command[100], temp[100];
    int i, j;

    for( ; ; ){
        printf("Command? (add, sub, mul, div)\nEnter 'quit' if you want to stop.\n");
        gets(command);

        if(!strcmp(command, "quit")){
            break;
        }

        printf("Enter the first number: ");
        gets(temp);
        i = atoi(temp);

        printf("Enter the second number: ");
        gets(temp);
        j = atoi(temp);

        // perform the operation

        if(!strcmp(command, "add")){
            printf("%d\n",i+j);
        }else if(!strcmp(command, "sub")){
            printf("%d\n",i-j);
        }else if(!strcmp(command, "mul")){
            printf("%d\n",i*j);
        }else if(!strcmp(command, "div")){
            if(j>0 || j<0){
                printf("%f\n",i/j);
            }else("Math ERROR");
        }else{
            printf("Unknown Command!");
        }
    }   

    return 0;
}