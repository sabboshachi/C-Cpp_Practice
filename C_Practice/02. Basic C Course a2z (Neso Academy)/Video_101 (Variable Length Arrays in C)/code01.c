#include<stdio.h>
int main(){
    int i, a_len;
    printf("Enter the length of the array: ");
    scanf("%d", &a_len);

    int a[a_len]; // Variable length Array where the length is defined by user

    for(i=0; i <a_len; i++){
        scanf("%d", &a[i]);
    }

    for(i=a_len-1; i >=0 ; i--){
        printf("%d ", a[i]);
    }

}