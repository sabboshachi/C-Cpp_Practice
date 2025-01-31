#include<stdio.h>
int main(){
    int a = 5;
    if (a != 5 || a == 6 || a <= 56 || a > 4){
        printf("Any one or all conditions are TRUE, so this printf function is working.");
    }

    return 0;
}

// || (OR) return TRUE if one condition is TRUE.
// If all conditions are FALSE it will return FALSE.