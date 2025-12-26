#include <stdio.h>
int main() {
    int i, j, k;
    int rowA, colA, rowB, colB;

    // Matrix A
    printf("Your 1st matrix is A\n");
    printf("Enter the number of rows of A: ");
    scanf("%d", &rowA);
    printf("Enter the number of columns of A: ");
    scanf("%d", &colA);

    int a[rowA][colA];
    printf("Enter your A matrix's elements:\n");
    for(i=0; i<rowA; i++){
        for(j=0; j<colA; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Print Matrix A
    printf("Your A matrix is:\n");
    for(i=0; i<rowA; i++){
        printf("\t");
        for(j=0; j<colA; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Matrix B
    printf("Your 2nd matrix is B\n");
    printf("Enter the number of rows of B: ");
    scanf("%d", &rowB);
    printf("Enter the number of columns of B: ");
    scanf("%d", &colB);

    int b[rowB][colB];
    printf("Enter your B matrix's elements:\n");
    for(i=0; i<rowB; i++){
        for(j=0; j<colB; j++){
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Print Matrix B
    printf("Your B matrix is:\n");
    for(i=0; i<rowB; i++){
        printf("\t");
        for(j=0; j<colB; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Check if multiplication is possible
    if(colA != rowB){
        printf("Matrix multiplication not possible! (Columns of A != Rows of B)\n");
        return 0;
    }

    // Result Matrix
    int c[rowA][colB];

    // Initialize result matrix with 0
    for(i=0; i<rowA; i++){
        for(j=0; j<colB; j++){
            c[i][j] = 0;
        }
    }

    // Multiply matrices
    for(i=0; i<rowA; i++){
        for(j=0; j<colB; j++){
            for(k=0; k<colA; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print Result
    printf("Resultant Matrix (A x B) is:\n");
    for(i=0; i<rowA; i++){
        printf("\t");
        for(j=0; j<colB; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
