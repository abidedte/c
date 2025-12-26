#include <stdio.h>
int main(){
    printf("Matrix A:\n");
    int arr1[3][3]={
        {22,20,60},
        {44,25,63},
        {98,78,27},
    };

    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    int arr2[3][3]={
        {12,34,56},
        {56,78,98},
        {11,43,16},
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    int sum[3][3];
    printf("\nYour sum is:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}