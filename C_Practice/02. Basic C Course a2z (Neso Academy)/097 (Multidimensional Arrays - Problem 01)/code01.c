// Take input and make an array from use

#include<stdio.h>
#define ROW 5
#define COLUMN 5

int main(){
    int a[ROW][COLUMN];
    int i, j;

    for(i=0; i<ROW; i++){
        printf("Enter Row %d: \n", i+1);
        for(j=0; j<COLUMN; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    printf("The 2D Array is: \n");
    for(i=0; i<ROW; i++){
        for(j=0; j<COLUMN; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}