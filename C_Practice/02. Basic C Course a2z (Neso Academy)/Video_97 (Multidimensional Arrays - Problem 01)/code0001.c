// Take input and make an array from use

#include<stdio.h>

int main(){
    int ROW, COLUMN;
    printf("Enter Row Number: ");
    scanf("%d", &ROW);

    printf("Enter Column Number: ");
    scanf("%d", &COLUMN);

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