#include<stdio.h>
#include<math.h>

int main(){
    int x = 3, y = 5;
    while (y != 0){
        x++;
        y--;
    }
    printf("The sum of the given numbers are: %d",x);
    return 0;
}