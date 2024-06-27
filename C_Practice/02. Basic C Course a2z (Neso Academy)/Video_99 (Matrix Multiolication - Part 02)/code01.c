#include<stdio.h>
int main(){
    int r1, c1, r2, c2, i, j;
    
    printf("Enter the rows and Columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    int A[r1][c1];

    printf("Enter the elements of matrix A:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matrix A: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    printf("Enter the rows and Columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    int B[r2][c2];

    printf("Enter the elements of matrix B: \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matrix B: \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

}

// Wrong
