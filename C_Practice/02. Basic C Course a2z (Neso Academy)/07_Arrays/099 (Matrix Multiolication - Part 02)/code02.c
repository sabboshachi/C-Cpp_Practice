#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    // Input for Matrix A
    printf("Enter the rows and Columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    int A[r1][c1];

    printf("Enter the elements of matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matrix A: \n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Input for Matrix B
    printf("Enter the rows and Columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    int B[r2][c2];

    printf("Enter the elements of matrix B: \n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matrix B: \n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Multiplication is not possible between these two matrices.\n");
        return 1;
    }

    // Initializing the result matrix
    int max_mul[r1][c2];

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            int sum = 0;  // Initialize sum to 0 for each element
            for (k = 0; k < c1; k++) {
                sum += A[i][k] * B[k][j];
            }
            max_mul[i][j] = sum;
        }
    }

    // Print result matrix
    printf("Matrix AB: \n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", max_mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
