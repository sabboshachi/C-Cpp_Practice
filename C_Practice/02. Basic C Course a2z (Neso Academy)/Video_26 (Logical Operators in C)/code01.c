#include<stdio.h>
int main(){
    int a = 5;
    if (a == 5 && a != 6 && a <= 56 && a > 4){
        printf("All condition are TRUE so this printf function is working.");
    }

    return 0;
}

// && (AND) return TRUE if all conditions are TRUE.
// If any one condition or more than one condition are FALSE it will return FALSE.