#include <stdio.h>
int main(){
    int i,j,row,col;
    printf("Your 1st Matrix is A\n");

    printf("How many rows do you want for A: ");
    scanf("%d",&row);
    printf("How many columns do you want for B: ");
    scanf("%d",&col);

    int a[row][col];
    printf("Enter your A matrix's elements:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Your A matrix is: \n");
    for(i=0; i<row; i++){
        printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Your 2nd Matrix is B:\n");

    int b[row][col];
    printf("Enter you B matrix elements: \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
    printf("your B matrix is: \n");
    for(i=0; i<row; i++){
        printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    int sum[row][col];
    printf("\nYour sum is:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            sum[i][j]= a[i][j]+b[i][j];
        }
    }

    for(i=0; i<row; i++){
        printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }



    return 0;
}