#include <stdio.h>
int main(){
    int i,j,row1,col1;
    printf("Your 1st Matrix name is A\n");
    
    printf("Enter A matrix's row number: ");
    scanf("%d",&row1);
    printf("Enter B matrix's col number: ");
    scanf("%d",&col1);

    int a[row1][col1];
    printf("Enter your A matrix's elements:\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Your A matrix is:\n");
    for(i=0; i<row1; i++){
        printf("\t");
        for(j=0; j<col1; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    int row2,col2;

    printf("Your 2nd matrix name is B\n");

    printf("Enter B matrix's row number: ");
    scanf("%d",&row2);
    printf("Enter B matrix's col number:");
    scanf("%d",&col2);

    int b[row2][col2];
    printf("Enter your B matrix's elements:\n");

    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            printf("b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("Your B matrix is: \n");
    for(int i=0; i<row2; i++){
        printf("\t");
        for(int j=0; j<col2; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }



    return 0;
}
