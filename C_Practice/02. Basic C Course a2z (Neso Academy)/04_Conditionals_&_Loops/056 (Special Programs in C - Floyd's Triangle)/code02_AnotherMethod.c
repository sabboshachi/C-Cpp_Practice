// According to video
#include<stdio.h>
int main(){
    int n = 5, i, j , m = 1;
    for (i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){ // this is the key term where colomn number = row number
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}