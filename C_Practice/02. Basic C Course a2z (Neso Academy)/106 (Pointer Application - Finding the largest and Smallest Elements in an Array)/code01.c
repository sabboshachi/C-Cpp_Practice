#include<stdio.h>
int main(){
    int a[10] = {34, 56, 54, 32, 67, 89, 90, 32, 21, 11};
    int i, min, max;
    min = a[0];
    max = a[0];
    for(i=1; i<10; i++){
        if(a[i]<min)
            min = a[i];

        if(a[i]>max)
            max = a[i];
    }

    printf("min = %d \nmax = %d", min, max);

}