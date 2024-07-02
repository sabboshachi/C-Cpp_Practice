#include<stdio.h>
int main(){
    int n=4, i,j;
    char alphabate = 'A';
    for(i=1; i<=n; i++){
        for (j=1; j<=n; j++)
        {
            while(j<=i){
                printf("%c", alphabate+i-1);
                j++;
            }
        }
        printf("\n");
    }
    return 0;
}