#include <stdio.h>
int main(){
    int i,j,row,col;

    printf("Enter your row number: ");
    scanf("%d",&row);
    printf("Enter your col number: ");
    scanf("%d",&col);

    int a[row][col],b[row][col],sum[row][col];

    printf("Enter a matrix element:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter b matrix element:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("A=");
    for(i=0;i<row;i++){
        printf("\t");
        for(j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nB=");
    for(i=0;i<row;i++){
        printf("\t");
        for(j=0;j<col;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\nSum= ");

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i=0; i<row; i++){
        printf("\t");
        for(j=0;j<row;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}