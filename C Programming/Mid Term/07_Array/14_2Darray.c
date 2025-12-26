#include <stdio.h>
int main(){
    int i,j,uppersum=0,lowersome=0,row,col;
    printf("Enter the value of row: ");
    scanf("%d",&row);
    printf("Enter the value of col: ");
    scanf("%d",&col);

    int a[row][col];

    printf("Enter the elements of matrix:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\nA=");
    for(i=0; i<row; i++){
        printf("\n");
        for(j=0; j<col; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(i<j){
                uppersum = uppersum +a[i][j];
            }
            if(i>j){
                lowersome = lowersome + a[i][j];
            }
        }
    }
    printf("\nsum of upper trianguler elements=%d\n",uppersum);
    printf("\nsum of lower triangular elements=%d\n",lowersome);

    return 0;
}