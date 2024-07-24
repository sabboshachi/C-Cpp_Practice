#include<stdio.h>
int main(){
    char str[80];
    int i;

    printf("Enter a string (less than 80 charecters): \n");

    gets(str);

    for(i=0;str[i];i++){
        printf("%c", str[i]);
    }

    printf(str); // Another way to print a string

    printf("%s\n",str); // Another way to print a string

    return 0;

}