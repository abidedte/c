#include <stdio.h>
int main(){
    int i,j;

    int a[3][3],b[3][3];

    printf("Enter a matrix elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("A=");
    for(i=0; i<3; i++){
        printf("\t");
        for(j=0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter your b matrix elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("B=");
    for(i=0;i<3;i++){
        printf("\t");
        for(j=0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}