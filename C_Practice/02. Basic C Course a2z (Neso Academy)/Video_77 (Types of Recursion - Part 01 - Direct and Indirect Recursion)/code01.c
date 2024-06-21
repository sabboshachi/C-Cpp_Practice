// Write a program to print numbers from 1 to 10 in such a way that when number is odd, add 1 and when number is even, 
// subtract 1
// Output: 2 1 4 3 6 5 8 7 10 9

#include<stdio.h>
void odd();
void even();
int n=1;

int main(){
    odd();
}

void odd(){
    if(n<=10){
        printf("%d ", n+1);
        n++;
        even();
    }
    return;
}

void even(){
    if(n<=10){
        printf("%d ", n-1);
        n++;
        odd();
    }
    return;
}


