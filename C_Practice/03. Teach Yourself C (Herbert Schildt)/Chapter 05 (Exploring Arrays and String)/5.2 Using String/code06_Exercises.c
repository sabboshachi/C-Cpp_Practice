// Write a program that repeatedly inputs strings. Each time a string is input, col1catenate it with a second string called bigstr.
// Add newlines to the end of each string. If the user types quit, stop inputting and display bigstr (which will contain a record of
// all strings input). Also stop if bigstr will be overrun by the next concatenation. 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str1[100], bigstr[100];
    int i,j;

    printf("Enter String: \n");
    gets(str1);

    while(strlen(bigstr)<100){
        if(!strcmp(str1,"quit")){
            break;
        }
        strcat(bigstr, str1);
        printf("Enter another String: \n");
        gets(str1);
    }
    printf("%s",bigstr);

    return 0;
}