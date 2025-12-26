#include <stdio.h>
int main(){
    int i,j,row,col;
    printf("Enter your row: ");
    scanf("%d",&row);
    printf("Enter your col: ");
    scanf("%d",&col);

    int a[row][col],transpose[col][row];

    printf("Enter your matrix elements: \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            transpose[j][i]=a[i][j];
        }
    }

    printf("\nA= ");
    for(i=0; i<row; i++){
        printf("\t");
        for(j=0; j<col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nT= ");
    for(i=0; i<col; i++){
        printf("\t");
        for(j=0; j<row; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }



    return 0;
}