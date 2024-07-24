// Write a program that inputs a string, then displays it backward on the screen. 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str1[100];
    int i,j;

    printf("Enter a String: \n");
    gets(str1);

    j = strlen(str1);

    for(i=j;i>=0;i--){
        printf("%c",str1[i]);
    }

    return 0;
}