#include<stdio.h>
#define STRING "%s\n"
#define NAME "Hi, I am Sabboshachi." 
int main(){
    printf(STRING, NAME); // Whatever is defined as constant will be replace by its value 
    // so the printf is basically printf("%s\n", "Hi, I am Sabboshachi.")
    return 0;
}