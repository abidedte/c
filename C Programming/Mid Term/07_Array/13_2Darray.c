#include <stdio.h>
int main(){
    int i,j,sum=0,row,col;
    
    printf("Enter the number of row: ");
    scanf("%d",&row);
    printf("Enter the number of col: ");
    scanf("%d",&col);

    int a[row][col];

    printf("Enter the elements of this matrix:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\nA= ");
    for(i=0; i<row; i++){
        printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(i==j){
                printf("%d",a[i] [j]);
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of diogonal elements: %d\n",sum);


    return 0;
}