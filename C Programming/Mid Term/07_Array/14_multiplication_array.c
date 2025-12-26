#include <stdio.h>
int main(){
    int m;
    printf("Enter the row of 1st matrix: ");
    scanf("%d",&m);
    int n; 
    printf("Enter the col of 1st matrix: ");
    scanf("%d",&n);

    int p;
    printf("\nEnter the row of 2nd matrix: ");
    scanf("%d",&p);
    int q;
    printf("Enter the col of 2nd matrix: ");
    scanf("%d",&q);

    int a[m][n];
    printf("\nEnter the elements of 1st matrix: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    int b[p][q];
    printf("\nEnter the elements of 2nd matrix: ");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            printf("b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("A matrix is :\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

     printf("B matrix is :\n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    if(n!=p){
        printf("not possible to multiplication\n");
    }

    else{
        int result[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                result[i][j]=0;
                for(int k=0; k<n; k++){
                result[i][j] = result[i][j] + a[i][k] * b[k][j]; 
                }
            }
        }
        printf("The result of multiplication:\n");
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}