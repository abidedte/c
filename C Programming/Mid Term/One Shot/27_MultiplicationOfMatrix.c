#include <stdio.h>
int main(){
    int i,j,k,row1,col1,row2,col2;
    
    printf("Your 1st matrix is A\n");

    printf("Enter the number of row:");
    scanf("%d",&row1);
    printf("Enter the number of columns:");
    scanf("%d",&col1);

    int a[row1][col1];
    printf("\nEnter your A matrix's elements:\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            printf("a[%d][%d]:",i,j);
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

    printf("Your 2nd matrix is B\n");

    printf("Enter the number of row:");
    scanf("%d",&row2);
    printf("\nEnter the number of columns:");
    scanf("%d",&col2);

    int b[row2][col2];
    printf("\nEnter your b matrix's elements:\n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            printf("b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("Your B matrix is:\n");

    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    if(col1!=row2){
        printf("you are not able to multiply A x B\n");
    }
    else{
        int c[row1][col2];

        for(i=0; i<row1; i++){
            for(j=0; j<col2; j++){
                c[i][j]=0;
            }
        }

        for(i=0; i<row1; i++){
            for(j=0; j<col2; j++){
                for(k=0; k<col1; k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("\nA x B : \n");
        for(i=0; i<row1; i++){
            printf("\t");
            for(j=0; j<col2; j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }


    return 0;

}