#include<stdio.h>
int main(){
    int n = 3, i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Here this code is like matrix

// step1: 
// 1st for loop
// i = 1, condition satisfyed
// goes to 2nd for loop
// assign j = 1
// so, i = 1, j = 2

// step2: 
// i = 1, 
// 2nd for loop
// condition satisfyed
// assign j = 2 after increment
// so, i = 1, j = 2

// step3:
// 2nd for loop
// condition not satisfyed 
// goes to 1st for loop

// step4:
// 1st for loop
// assign i = 2 after increment, condition satisfyed
// goes to 2nd for loop
// assign j = 1
// so, i = 2, j = 1

// step5:
// i = 2, 
// 2nd for loop
// condition satisfyed
// assign j = 2 after increment
// so, i = 2, j = 2

// step6:
// 2nd for loop
// condition not satisfyed 
// goes to 1st for loop
// condition not satisfyed 
// terminate the loop and thus the square shape is printed

// |*|*|
// |_|_|
// | | |
// |*|*|