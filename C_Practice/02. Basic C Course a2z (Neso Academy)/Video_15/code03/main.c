#include<stdio.h>
#include<stdlib.h>

extern int count; // using this extern command we can access this variable from add.c file without allocating extram memory for it
// the prevension of such act is shown in code04
int main(){
    
    int value;

    value = increment();
    value = increment();
    value = increment();

    count = count + 3; 
    value = count;

    printf("%d", value);
    return 0;
}