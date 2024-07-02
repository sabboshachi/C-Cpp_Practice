#include<stdio.h>
int main(){
    int x = 3; // x = 3 initialized
    if (x == 2);x = 0; // if condion fails and as it has an ";" x is again assigned a new value which is 0
    if (x == 3) // x != 3 so don't execute loop go to else 
        x++;
    else x += 2; // x = x + 2 = 0 + 2 = 2
    printf("%d",x); 
    return 0;
}
// Thus the output will be x = 2