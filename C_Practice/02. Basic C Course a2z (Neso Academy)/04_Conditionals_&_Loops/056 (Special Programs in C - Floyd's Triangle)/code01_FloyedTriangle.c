// My Technique
#include<stdio.h>
int main(){
    int n = 5, i, j , m = 1;
    for (i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            while(j<=i){
                printf("%d ",m);
                j++;
                m++;
            }
        }
        printf("\n");
    }
    return 0;
}