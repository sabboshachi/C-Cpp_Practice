// Write a c program to display all prime numbers between two interval entered by user.

#include <stdio.h>
int main(){
    int n1,n2,i,j,flag=0;

    printf("Enter the lower limit of the range: ");
    scanf("%d", &n1);

    printf("Enter the higher limit of the range: ");
    scanf("%d", &n2);

    if(n1<n2){
        printf("The prime numbers are: ");
        for(i=n1;i<=n2;i++){
            flag=0;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }

            if (flag==0){
                printf("%d ",i);
            }
        }

    }else{
        printf("Enter a valid range.");
    }

    return 0;
}