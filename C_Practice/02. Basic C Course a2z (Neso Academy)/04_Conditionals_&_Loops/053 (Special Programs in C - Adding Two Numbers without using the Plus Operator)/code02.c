#include<stdio.h>
#include<math.h>

int main(){
    int x = 3, y = 5;
    if (y<0 || x<0){
        while (y!=0){
            x--;
            y++;
        }
    }
    else if (y>0 || x<0){
        while (y!=0){
            x++;
            y--;
        }
    }

    printf("The sum of the given numbers are: %d",x);
    return 0;
}