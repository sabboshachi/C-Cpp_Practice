#include<stdio.h>
int main(){
    int n=4,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            while(j<=i){
                printf("*");
                j++;
            }
        }
        printf("\n");
    }
    return 0;
}