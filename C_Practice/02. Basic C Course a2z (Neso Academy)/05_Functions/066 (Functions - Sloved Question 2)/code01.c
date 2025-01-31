#include<stdio.h>

void f1(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
}
// after this function the values will be
// a = 5
// b = 4
// c = 4
// but as the function ends the values will be distroyed 
// example of Call_By_Values

void f2(int *a, int *b){
    int c;
    c = *a; // access the content of this particular memory address (1000) which is 5. so c = 5
    *a = *b; // replacing content of 2000 with content of 1000 which means 5 replaced by 6 so b = 6
    *b = c; // storing the value of c(5) in memory location 2000, so c = 5
}
// *a = address of b (say 1000)
// *b = address of c (say 2000)
// c = 0 (initially)

int main(){
    int a = 4, b = 5, c = 6;
    f1(a,b); // definition of f1 function
    f2(&b, &c); // definition of f2 function
    printf("%d", c-a-b);
    return 0;
}
// So, finally 
// a = 4
// b = 6
// c = 6

// c-a-b = 5-4-6 = -5 (output)