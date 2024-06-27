// Write a program that reads a 5x5 array of integers and then prints the row sum and the column sum.

// Enter row 1: 8 3 9 0 10
// Enter row 2: 3 5 17 1 1
// Enter row 3: 2 8 6 23 1
// Enter row 4: 15 7 3 2 9
// Enter row 5: 6 14 2 6 0

// Row total: 30 27 40 36 28
// Column total: 34 37 37 32 21

#include<stdio.h>

int main(){
    int ROW, COLUMN;
    printf("Enter Row Number: ");
    scanf("%d", &ROW);

    printf("Enter Column Number: ");
    scanf("%d", &COLUMN);

    int a[ROW][COLUMN];
    int i, j, sum;

    for(i=0; i<ROW; i++){
        printf("Enter Row %d: \n", i+1);
        for(j=0; j<COLUMN; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    printf("Given 2D Array: \n");
    for(i=0; i<ROW; i++){
        for(j=0; j<COLUMN; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Row total: ");
    for(i=0; i<ROW; i++){
        for(j=0; j<COLUMN; j++){
            sum = sum + a[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\n");
    printf("Column total: ");
    for(i=0; i<COLUMN; i++){
        for(j=0; j<ROW; j++){
            sum = sum + a[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }
}