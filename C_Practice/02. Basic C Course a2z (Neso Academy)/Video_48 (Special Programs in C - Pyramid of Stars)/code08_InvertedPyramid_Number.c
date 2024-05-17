#include<stdio.h>
int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            while(j<=i){
                printf("%d",j);
                j++;
            }
        }
        printf("\n");
    }
    return 0;
}